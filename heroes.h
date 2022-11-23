#ifndef HEROES_H
#define HEROES_H

#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::ostream;
using std::vector;

#include "Data.cpp"
#include "time.h"




//Sobrecarga de operadores
//Operador <<


class Heroes: public Time
{

    friend ostream &operator<<(ostream &, const Heroes &);

public:
    //Construtores
    Heroes();
    //Heroes(const string &, const string &, int, int, int, int, int, int, int);
    //Heroes(const string &, const string &, int, int, int);
    Heroes(const string &, int, int, TIME, string);
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
    

    //Stat/c
    static int getDamageMax( )
    {
        return damageMax; 
    }; 
    static int getDamageContinuos( )
    {
        return damageContinuos;
    };

    //Sobrecarga
    Heroes & operator=(const Heroes &);
    bool operator==(const Heroes &) const;
    bool operator!=(const Heroes &) const;
    void operator!();

   
    

private: 

    //Atributos
    int strength;
    int life;
    int shield;
    int defense; 
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
    static vector<string> name;

    vector< string * > heroes; 

    int *duelDefeatPtr;

    int duelSize;

    int duelDefeat;

    void printDuel( ) const;
    void alocarDuel( int );

    Data data;
    
    
};

#endif 