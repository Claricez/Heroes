#ifndef BATTLE_H
#define BATTLE_H
#include <string>
#include <iostream>
#include "partida.h"

using std::string;
using std::ostream;


class Battle: public Partida
{
    friend ostream &operator<<(ostream &, const Battle &);

    public:
   
    //Construtores
    Battle();
    Battle(const Battle &);
    Battle(int, int, TIME, TIME, int);
    Battle(int);
    Battle(int,int);
    virtual ~Battle();
    

    virtual void printInformations();

    //Sobrecargas
    bool operator==(const Battle &) const;
    bool operator!=(const Battle &) const;
    void operator!();
    Battle & operator=(const Battle &);
  


    //Métodos
    void poderSuper();
    void danoTime1();

    //Get
    int getQtd() const;
    double getPontoTime1() const {return pontoTime1;}
     double getPontoTime2() const {return pontoTime2;}

    //Set
    double setPontoTime1(double );
    double setPontoTime2(double);
    void operator=(Battle &other);
    bool operator==(Battle &other) const;
    bool operator!=(Battle &other) const;
   
    private:
        
        int totalPersonagens;
        int qtdPersonagens; 
        int *ptr; 
        double pontoTime1;
        double pontoTime2;
        
};

#endif 