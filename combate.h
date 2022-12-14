#ifndef COMBATE_H
#define COMBATE_H

#include <string>
using std::string;

#include "Battle.h"

class Combate: public Battle
{

    public:
        Combate();
        Combate(const Combate&);
        ~Combate();

        int setAtaqueTime1(int);
        int setAtaqueTime2(int);
        void setResultado();

        void printInformations(); 

    private:
        int ataqueTime1;
        int ataqueTime2;
        bool resultado;
};

#endif 