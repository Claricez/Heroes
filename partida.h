#ifndef PARTIDA_H
#define PARTIDA_H

#include <iostream>

using std::string;
using std::ostream;

struct TIME{
    string atacante;
    string defensor;
    string capitao;
};


class Partida
{
    friend ostream &operator<<(ostream &, const Partida &);
   
    public:

    //Construtores e desconstrutores
    Partida();
    Partida(TIME,int);
    Partida(TIME, TIME, int);
    Partida(TIME, TIME);
    Partida( const Partida&);
    ~Partida();

    //Sobrecargas de operadores
    Partida& operator=(const Partida&);
   
    
    //Set
    void setTime1( TIME);
    void setTime2( TIME);
    int setNumPartida(int);

    //Get
    TIME getTime1() const;
    TIME getTime2() const;
    int getNumPartida() const;


    private:

    //Atributos
    TIME time01;
    TIME time02;
    int numPartida;
     

  
};


#endif 