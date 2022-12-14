#ifndef ARMAMENTO_H
#define ARMAMENTO_H

#include <string>
using std::string;

#include "missoes.h"

class Armamento: public Missoes
{
    public:
        Armamento();
        Armamento(string, string, string);
        Armamento(string, string, string, string, string);
        ~Armamento();

        void escudoAtivado();
        void escudoDesativado();

        void selectAtuacao(string="Atacar");
        string getArma() {return this->arma;}
        string getSkillEspecial() {return this->skillEspecial;}
        string getAtuacao() {return this->atuacao;}

        void printInformations( );

    private:
        string arma;
        string skillEspecial;
        string atuacao; 
};

#endif 