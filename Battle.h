#ifndef BATTLE_H
#define BATTLE_H
#include <string>
#include <iostream>
#include "time.h"

using std::string;
using std::ostream;


class Battle: public Time
{
    friend ostream &operator<<(ostream &, const Battle &);
    public:
 

    //Operador =
    //const Battle &operator=( const Battle &);
  
   bool operator==(const Battle &) const;
    //Construtores
    Battle();
    //Battle( int, int , bool, TIME, string );
    //aBattle(int = 10);
    Battle(const Battle &);
    ~Battle();

    //Métodos
   
    void poderSuper();
    void danoBaixo();

    //Get
    int getQtd() const;

    //Set
    void setPoder(int poder);

    void operator=(Battle &other);
    bool operator==(Battle &other) const;
    bool operator!=(Battle &other) const;
    void operator!();

    private:
        
        int totalPersonagens;
        int poder;
        int defesa;
        bool escudoAtivado;
        int *ptr;
        int qtdPersonagens; 
        


};

#endif 