#include "partida.h"
#include <iostream>
using std::cout;
using std::string;
using std::ostream;

Partida::Partida()
{
    this->time01.atacante = "None";
    this->time01.defensor = "None";
    this->time01.capitao = "None";

    this->time02.atacante = "None";
    this->time02.defensor = "None";
    this->time02.capitao = "None";
}

Partida::Partida(TIME time01, int numPartida)
{
    setTime1(time01);
    setNumPartida(numPartida);
};

Partida::Partida(TIME time01, TIME time02)
{
    setTime1(time01);
    setTime2(time02);
};

Partida::Partida(TIME time01, TIME time02, int numPartida)
{
    setTime1(time01);
    setTime2(time02);
    setNumPartida(numPartida);
};

Partida::Partida(const Partida &other)
{
    this->time01=other.time01;
    this->time02=other.time02;
    this->numPartida=other.numPartida;
}


Partida::~Partida(){
    cout << "\n"; 
};


ostream &operator<<(ostream &out, const Partida &t)
{
    out<< "==========================="<< "\n";
    out << "\nInicializando Time" << "\n";
    out << "\nHeróis" << "\n";
    out << "\nAtacante: " << t.time01.atacante << "\n";
    out << "Defensor: " << t.time01.defensor << "\n";
    out << "Capitão: " << t.time01.capitao << "\n";
    out << "\nVilões" << "\n";
    out << "\nAtacante: " << t.time02.atacante << "\n";
    out << "Defensor: " << t.time02.defensor << "\n";
    out << "Capitão: " << t.time02.capitao << "\n";
    out << "Número da partida: " << t.numPartida << "\n";
   
    
    return out;
}



TIME Partida::getTime1() const{
    return time01;
    
}

TIME Partida::getTime2() const{
    return time02;
    
}
int Partida::getNumPartida() const
{
    return numPartida;
}

void Partida::setTime1(TIME t)
{
    time01.atacante = t.atacante;
    time01.defensor= t.defensor;
    time01.capitao = t.capitao;
}

void Partida::setTime2(TIME t)
{
    time02.atacante = t.atacante;
    time02.defensor= t.defensor;
    time02.capitao = t.capitao;
}

int Partida::setNumPartida( int numPartida)
{
    if (numPartida<1)
    {
        cout << "Número da partida deve ser maior que 0";
        return false;
    }
    return numPartida; 
}