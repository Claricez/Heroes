#ifndef HEROES_H
#define HEROES_H
#include <string>
using std::string;

class Heroes
{
public:
    Heroes();
    Heroes(const string &, const string &, int, int, int, int);
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
    void printLevel();
    void printFullTypes();



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

    //Arrays
    string level[4] = {"Comum", "Normal", "Rare", "Hight Rare"};

    //Statics
    static int damageMax;
    static int damageContinuos;
    static const int NUMTYPES = 4;
    static const string Types[ NUMTYPES ];


    
};

#endif 