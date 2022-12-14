#include <iostream>
#include <string>
#include "personagem.h"
#include <map>
#include <iterator>
#include <vector>

using std::vector;
using std::cout;
using std::map;
using std::string;
using std::ostream;

//Declarando variáveis statics
const string Personagem::Types[ NUMTYPES ] = {"Human","Mutant", "Modified human","space inhabitant" };
//vector<string> Personagem::personagem = {"Black Widow", "Scarlet Witch", "Ms. Marvel", "Gamora", "Mystique", "Rogue"};


//Construtores
Personagem::Personagem()
{

};

Personagem::Personagem(int numPartida, string description, string name, TIME time01):Partida(time01, numPartida)
{
    this->description=description;
    this->name=name;
};

Personagem::Personagem(string name, string description, TIME time01, TIME time02):Partida(time01, time02)
{
    this->name = name;
    this->description = description;
}



Personagem::~Personagem()
{

}

//Operadores

ostream &operator<<(ostream &out, const Personagem &p)
{
   
   out << "--------------------------" << "\n";
   out << static_cast< Partida>(p) << '\n';
   out << "Nome: " << p.name  << "\n";
   out << "Descrição: " << p.description << "\n";
   out << "Level: " << p.level << "\n";

   return out;
   
   
};


Personagem& Personagem::operator=(const Personagem &other)
{
    if(this != &other)
    {
        this->name=other.name;
        this->description=other.description;
        //this->Types=other.Types;
        this->level=other.level;
    }

    return *this;
};


//Sets

void Personagem::setNames(string name)
{
   
   this-> name = name;
}



void Personagem::setDescription( string description )
{
    if (description.length()>0 && description.length()<51 )
    {
        this->description=description;
        return;
    }
}

//Gets

string Personagem::getNames() const
{
    /**
    for( int i=0; i < int(name.size()); i++){
    cout << "Personagem:" << name[i]->getPersonagem() << "\n";
    }
    */

   return name;
}



string Personagem::getDescription() const
{
    return description;
}

//Métodos


void Personagem::printFullTypes()
{
    int i = 0;
    cout << "Tipos: " << "\n";
    while( i <= NUMTYPES ){
        cout << Types[i] << "\n";
        i++;
    }
}

void Personagem::printTypes( int i)
{
    cout << Types[i] << "\n";
}