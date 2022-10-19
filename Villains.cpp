#include <iostream>
using std::cout;

#include "Villains.h"

Villains::Villains();

//Métodos
void Villains::print( )const
{
    cout << "\nName: " << name << "\n";
    cout << "\nPoder: " << poder << "\n";
    cout << "\nDefesa: " << defesa << "\n";
    
}

void Villains::poderSuper()
{
    poder = poder + 25;
}

void Villains::danoBaixo()
{
    life = life - 10;
}

void Heroes::vidaReduzida( ) 
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
