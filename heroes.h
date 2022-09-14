#ifndef HEROES_H
#define HEROES_H
#include <string>
using std::string;

class Heroes
{
public:
    Heroes();
    Heroes(string, string, int, int, int, int);
    Heroes( string, string, int, int, int);
    Heroes( string, string, int, int);
    Heroes( const Heroes &);
    ~Heroes();
    
   

    //Métodos
    void print( ) const;
    void reduceLife( );
    void power( );
    void especialPower( );
    void reduceDefense( );
    void upLife( );


    //Set
    void setStrength( int strength);
    void setLife( int life);
    void setShield( int shield);
    void setName( string);
    void setType( string);
    void setDamage( int ); 
    void setSuperPower( int ); 
    void setDefense( int );

    //Get
    int getStrength( ) const;
    int getLife(  ) const;
    int getShield(  ) const;
    int getSuperPower( ) const;
    string getName( ) const;
    string getType( ) const;
    int getDamage( ) const; 
    int getDefense( ) const;
    

private: 

    int strength;
    int life;
    int shield;
    int defense; 
    string name;
    string type; 
    const int superPower; 
    const int damage; 
    
};

#endif 