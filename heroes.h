#ifndef HEROES_H
#define HEROES_H


using namespace std; 
class Heroes
{
public:
    Heroes();
    ~Heroes();

    void print( ) const;
    void power( );
    void especialPower( );
    void setStrength( int strength);
    void setLife( int life);
    void setShield( int shield);
    char name[20];
    char type[20]; 


private:

    int strength;
    int life;
    int shield;

};

#endif 