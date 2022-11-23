#include "time.h"
#include <iostream>
using std::cout;
using std::string;


Time::Time()
{
    this->time01.atacante = "None";
    this->time01.defensor = "None";
    this->time01.pontos = 0;
}

Time::Time( TIME time01, TIME time02, string capitao)
{
    setTime(time01, capitao);
    setCapitao(capitao, time01);
};




Time::~Time(){
    cout << "\n"; 
};


ostream &operator<<(ostream &out, const Time &t)
{
    out << "\nAtacante: " << t.time01.atacante << "\n";
    out << "Defensor: " << t.time01.defensor << "\n";
    out << "Pontos: " << t.time01.pontos << "\n";
    out << "Capitao: " << t.capitao << "\n";
   
    
    return out;
}

ostream &operator<<(ostream &out, const Time &t)
{
    out << "\nAtacante: " << t.time02.atacante << "\n";
    out << "Defensor: " << t.time02.defensor << "\n";
    out << "Pontos: " << t.time02.pontos << "\n";
   
    
    return out;
}


TIME Time::getTime() const{
    return time01;
    
}

TIME Time::getTime2() const{
    return time02;
    
}
string Time::getCapitao() const
{
    return capitao;
}

void Time::setTime(TIME t, string capitao)
{
    time01.atacante = t.atacante;
    time01.defensor= t.defensor;
    time01.pontos = t.pontos;
    this->capitao = capitao;
}

void Time::setTime2(TIME t, string capitao)
{
    time02.atacante = t.atacante;
    time02.defensor= t.defensor;
    time02.pontos = t.pontos;
    this->capitao = capitao;
}

void Time::setCapitao(string &capitao, TIME t) 
{
    if (t.atacante != capitao){
        this->capitao = capitao;
        return;
    }
    if (t.defensor != capitao){
        this->capitao = capitao;
    }
}
