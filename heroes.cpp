#include <iostream>
using std::cout;

#include "heroes.h"

Heroes::Heroes( )
{
   cout << "\nInicializando Herói no constructor.\n";
}

Heroes::~Heroes( )
{  

}

void Heroes::print( ) const
{
    
    cout << "\nName: " << name << "\n";
    cout << "Type: " << type << "\n";
    cout << "Shield: " << shield << "\n";
    cout << "Strength: "   << strength << '\n';
    cout << "Life: " << life << '\n';
}

void Heroes::power( ){
    strength = strength + 10;
}

void Heroes::especialPower( ){
    strength = strength + 10;
    shield = shield + 10;
}

void Heroes::setStrength(int strength){
    this->strength = strength;
}

void Heroes::setLife(int life){
    this->life = life;
}

void Heroes::setShield(int shield){
    this->shield = shield;
}