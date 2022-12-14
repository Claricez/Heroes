#include <iostream>
#include <string>
#include "heroes.h"
#include <vector>
using std::cout;
using std::string;
using std::ostream;
using std::vector;

#include "heroes.h"

#include <vector>
using std::vector;

int Heroes::damageContinuos = -10;
int Heroes::damageMax = 50;
const string Heroes::Types[ NUMTYPES ] = {"Human","Mutant", "Modified human","space inhabitant" };

//Static Name
vector<string> Heroes::name = {"Wonder Woman", "Black Window", "Scarlet Witch", "Miss Marvel", "Captain Marvel", "Rougue"};
Heroes::Heroes( ):Damage(25), SuperPower(100)
{
   cout << "\nDefault.\n";
  
   type = "none";
   strength = 0;
   life = 0;
   defense = 0;
   shield = 0; 
   defense = 0;
}

//Construtor com atributos específicos 
Heroes::Heroes(const string & name, const string & type, int life, int strength, int defense):Damage(25), SuperPower(100)
{
    cout<<"\nConstrutor com atributos específicos";
    //setName( name);
    setType( type );
    shield = 0;
    setStrength( strength );
    setDefense( defense );
    setLife( life );
    damageMax++;
    
}

//Construtor com todos os atributos
Heroes::Heroes( const string & name, const string & type, int shield, int strength, int life, int defense, int d, int m, int a):Damage(25), SuperPower(100)
    {
        cout << "\nInicializando Heroes com todos os atributos\n";
        //setName( name );
        setType( type );
        setShield( shield );
        setStrength( strength );
        setLife( life );
        setDefense( defense );
        damageContinuos++;
       
        
        cout << "Finalizando Heroes\n"; 

      
    }

//Construtor cópia
Heroes::Heroes( const Heroes& other): Damage(25), SuperPower(100)
{
    cout << "Construtor cópia";
    this->name = other.name;
    this->type = other.type;
    this->shield = other.shield;
    this->strength = other.strength;
    this->life = other.life; 
    
}

//Construtor com apenas os atributos name, type, shield e life. 
Heroes::Heroes( const string &type, int shield,int life, TIME time01, int numPartida):Damage(25), SuperPower(100), Partida(time01, numPartida)
    {
        cout << "\nInicializando Heroes com atributos especificados";
        
        setType( type );
        setShield( shield );
        setLife( life );
        this -> defense = 0;
        this -> strength = 0;
        this-> data = Data();
        

    }


Heroes::~Heroes( )
{  

}



//Declarando os statics

//Operador <<
ostream &operator<<(ostream &out, const Heroes &t)
{
   
    out << "Type:" << t.type << '\n';
    out << "Life:" << t.life << '\n';
    out << "Shield:" << t.shield << '\n';

    
    return out;
};


void Heroes::print( ) const
{ 
    cout << "Types in mission: " << type << "\n";
    cout << "Shield: " << shield << "\n";
    cout << "Strength: "   << strength << '\n';
    cout << "Life: " << life << '\n';
    cout << "Defense: " << defense << "\n";
    cout << "Super Power: " << SuperPower << "\n";
    cout << "Damage: " << Damage << "\n";
  
   
    
}

void Heroes::power( ){
    strength = strength + 10;
}

void Heroes::especialPower( ){
    strength = strength + 10;
    shield = shield + 10;
}



void Heroes::reduceLife( ) 
{
    if ( life > 0)
    {
        if ( shieldActive = false)
        {
            life = life - 10;
        }
        life = life - 5;
        return;
    }
    cout <<"Personagem derrotado";
    return;
  
    
}

void Heroes::upLife( )
{
    life = life + 15; 
}

void Heroes::reduceDefense( )
{
    defense = defense - 10;
    shield = shield - 10; 
}

//Sets
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
void Heroes::setDefense( int defense ){
    if ( defense > 0 )
    {
        this->defense = defense;
    }
}


void Heroes::setShield(int shield){
    this->shield = shield;
}


void Heroes::setType( string type )
{
    this-> type = type;
    return;
}

void Heroes::setDescription( string description )
{
    this-> description = description;
    return;
}




int Heroes::getDamage( ) const
{
    return Damage; 
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



string Heroes::getType() const
{
    return type;
}

int Heroes::getSuperPower( ) const
{
    return SuperPower;
}

int Heroes::getDefense( ) const
{
    return defense; 
}

string Heroes::getDescription( )const
{
    return description;
}

void Heroes::printTypes( int i)
{
    cout << Types[i] << "\n";
}

void Heroes::printLevel(int i)
{
   
    cout << "Level: " << level[ i ] << ' ' << '\n';
}



void Heroes::DuelFail( int setLife )
{
    if ( setLife <= 0)
    {
        cout << "Personagem derrotado" << "\n";
        duelDefeatPtr[ duelDefeat++];
        return;
    }
}

void Heroes::heroina( const string &newHero)
{
    if (heroes.size( )< numHeroes)
    {
        numHeroes++;
        heroes.push_back( new string(newHero));
        return;
    }

    cout << "Número de heroinas por batalha excedido" << "\n";
}



