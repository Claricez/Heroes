#include <iostream>
using std::cout;
using std::ostream;

#include "Villains.h"

Villains::Villains()
{

}

Villains::Villains( int numPartida, string associacao, int poder, int defesa, int vida, string name, string description, TIME time01):Personagem(numPartida,name, description, time01)
{
    this->associacao=associacao;
    this->poder=poder;
    this->defesa=defesa;
    this->vida=vida;
    
}

Villains::~Villains()
{

}

ostream &operator<<(ostream &out, const Villains &v)
{
    out << static_cast< Personagem>(v) << '\n';
    out << "Defesa: " << v.defesa << "\n";
    out << "Poder: " << v.poder << "\n";
    out << "Associação: " << v.associacao << "\n";
    out << "Vida: " << v.vida<< "\n";
    
    return out;
};


void Villains::poderSuper(int poder)
{
    poder = poder + 25;
}

void Villains::danoBaixo(int life )
{
    life = life - 10;
}

int Villains::vidaReduzida(int vida ) 
{
    if ( vida > 0)
    {
        if ( shieldActive = false)
        {
            vida = vida - 10;
        }
        vida = vida - 5;
        return vida;
    }
    cout <<"Personagem derrotado";
    return vida;
  
    
}

//Sets
void Villains::setPoder(int poder){
    if (poder>0)
    {
    this-> poder = poder;
    }
}

void Villains::setDefesa(int defesa)
{
    if ( defesa > 0)
    {
        this-> defesa = defesa;
    }
}



void Villains::setEscudo( int escudo)
{
     if ( escudo > 0)
    {
        this-> escudo = escudo;
    }
}
