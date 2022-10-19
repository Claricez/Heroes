#ifndef HEROES_H
#define HEROES_H
#include <string>
#include <iostream>
using std::string;
using std::ostream;
#include <vector>
#include "Data.h"
#include "Villains.h"
#include "Battle.h"



using std::vector;


class Heroes
{
public:
    
    
    //Construtores
    Heroes();
    Heroes(const string &, const string &, int, int, int, int, int, int, int);
    Heroes(const string &, const string &, int, int, int);
    Heroes(const string &, const string &, int, int);
    Heroes( const Heroes &);
    ~Heroes();

  
    
   

    //Métodos
    void print( ) const;
    void reduceLife( );
    void power( );
    void especialPower( );
    void reduceDefense( );
    void upLife( );
    static void printTypes( int );
    void printLevel(int);
    void printFullTypes();
    void DuelFail( int );
    void heroina( const string &);



    //Set
    void setStrength( int strength);
    void setLife( int life);
    void setShield( int shield);
    void setName( string);
    void setType( string);
    void setDamage( int ); 
    void setSuperPower( int ); 
    void setDefense( int );
    void setDescription( string );
    void setDATA( Data);


    //Get
    int getStrength( ) const;
    int getLife(  ) const;
    int getShield(  ) const;
    int getSuperPower( ) const;
    string getName( ) const;
    string getType( ) const;
    int getDamage( ) const; 
    int getDefense( ) const;
    string getDescription( )const;

    //Static
    static int getDamageMax( )
    {
        return damageMax; 
    }; 
    static int getDamageContinuos( )
    {
        return damageContinuos;
    };

   
    

private: 

    //Atributos
    int strength;
    int life;
    int shield;
    int defense; 
    string name;
    string type; 
    string description;
    bool shieldActive; 
    const int SuperPower; 
    const int Damage;
    int numHeroes; 

    //Arrays
    string level[4] = {"Comum", "Normal", "Rare", "Hight Rare"};

    //Statics
    static int damageMax;
    static int damageContinuos;
    static const int NUMTYPES = 4;
    static const string Types[ NUMTYPES ];

    vector< string * > heroes; 

    int *duelDefeatPtr;

    int duelSize;

    int duelDefeat;

    void printDuel( ) const;
    void alocarDuel( int );

    Data *DataNasc;
    Battle vitoria;
    Villains viloes;
    
};

#endif 