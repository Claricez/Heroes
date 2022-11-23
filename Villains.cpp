#include <iostream>
using std::cout;
using std::ostream;

#include "Villains.h"

Villains::Villains(string name, int poder, int defesa, int life):Heroes(life){
    this->poder=poder;
    this->defesa=defesa;
    this->name=name;
}

ostream &operator<<(ostream &out, const Villains &v)
{
    out << "Name" << v.name; 
    out << "Defesa: " << v.defesa ;
    out << "Poder: " << v.poder;
    
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

void Villains::vidaReduzida(int life ) 
{
    if ( life > 0)
    {
        if ( shieldActive = false)
        {
            vida = vida - 10;
        }
        vida = vida - 5;
        return;
    }
    cout <<"Personagem derrotado";
    return;
  
    
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

void Villains::setName(string name)
{
    this-> name = name;
    return;
}

void Villains::setEscudo( int escudo)
{
     if ( escudo > 0)
    {
        this-> escudo = escudo;
    }
}
