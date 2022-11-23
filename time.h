#ifndef TIME_H
#define TIME_H

#include <iostream>

using std::string;
using std::ostream;

struct TIME{
    string atacante;
    string defensor;
    int pontos;
};

class Time
{
    friend ostream &operator<<(ostream &, const Time &);
    Time& operator=(const Time&);
    public:
    Time();
    Time(TIME, string);
   
    Time( const Time&);
    ~Time();
    TIME herois;
    TIME viloes;
    
    //Set
    void setTime( TIME, string);
    void setTime2( TIME, string);
    void setCapitao(string &, TIME);

    //Get
    TIME getTime() const;
    TIME getTime2() const;
    string getCapitao() const;


    private:
    TIME time01;
    TIME time02;
    string capitao;
     

  
};


#endif 