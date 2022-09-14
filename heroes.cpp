#include <iostream>
#include <string>
#include "heroes.h"
using std::cout;
using std::string;

#include "heroes.h"

Heroes::Heroes( ):damage(25), superPower(100)
{
   cout << "\nDefault.\n";
   name = "none";
   type = "none";
   strength = 0;
   life = 0;
   defense = 0;
   shield = 0; 
   defense = 0;
}

//Construtor com atributos específicos 
Heroes::Heroes( string name, string type, int life, int strength, int defense):damage(25), superPower(100)
{
    cout<<"\nConstrutor com atributos específicos";
    setName( name);
    setType( type );
    shield = 0;
    setStrength( strength );
    setDefense( defense );
    setLife( life );
}

//Construtor com todos os atributos
Heroes::Heroes( string name, string type, int shield, int strength, int life, int defense):damage(25), superPower(100)
    {
        cout << "\nInicializando Heroes com todos os atributos\n";
        setName( name );
        setType( type );
        setShield( shield );
        setStrength( strength );
        setLife( life );
        setDefense( defense );
        cout << "Finalizando Heroes\n"; 

      
    }

//Construtor cópia
Heroes::Heroes( const Heroes& other): damage(25), superPower(100)
{
    cout << "Construtor cópia";
    this->name = other.name;
    this->type = other.type;
    this->shield = other.shield;
    this->strength = other.strength;
    this->life = other.life; 
    
}

//Construtor com apenas os atributos name, type, shield e life. 
Heroes::Heroes( string name, string type, int shield,int life):damage(25), superPower(100)
    {
        cout << "\nInicializando Heroes com atributos especificados";
        setName( name );
        setType( type );
        setShield( shield );
        setLife( life );
        defense = 0;
        strength = 0;
        

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
    cout << "Defense: " << defense << "\n";
    cout << "Super Power: " << superPower << "\n";
    cout << "Damage: " << damage << "\n";
}


void Heroes::power( ){
    strength = strength + 10;
}

void Heroes::especialPower( ){
    strength = strength + 10;
    shield = shield + 10;
}

void Heroes::setStrength(int strength){
    if ( strength > 0 and strength <= 100)
    {
    this->strength = strength;
    }
}

void Heroes::setLife(int life){
    if ( life > 0)
    {
    this->life = life;
    }
    
}

void Heroes::reduceLife( ) 
{
    life = life - 10;
    
}

void Heroes::reduceDefense( )
{
    defense = defense - 10;
    shield = shield - 10; 
}

void Heroes::setDefense( int defense ){
    if ( defense > 0 )
    {
        this->defense = defense;
    }
}

void Heroes::upLife( )
{
    life = life + 15; 
}

void Heroes::setShield(int shield){
    this->shield = shield;
}

void Heroes::setName( string name)
{
    this-> name = name;
    return;
}

void Heroes::setType( string type )
{
    this-> type = type;
    return;
}


int Heroes::getDamage( ) const
{
    return damage; 
}


int Heroes::getStrength() const
{
    return strength;
}

int Heroes::getLife() const
{
    return life; 
}

int Heroes::getShield() const
{
    return shield; 
}

string Heroes::getName() const
{
    return name; 
}

string Heroes::getType() const
{
    return type;
}

int Heroes::getSuperPower( ) const
{
    return superPower;
}

int Heroes::getDefense( ) const
{
    return defense; 
}
