#include "armamento.h"

#include <iostream>

using std::ostream;
//using std::cout;
#include <string>
using std::string;

Armamento::Armamento(string name, string type, string atuacao)
: Missoes(true, name, type)
{
    selectAtuacao(atuacao);
};

Armamento::Armamento(string arma, string skillEspecial, string name, string type, string atuacao)
: Missoes(true, name, type)
{
    selectAtuacao(atuacao);
};

Armamento::~Armamento()
{

};

void Armamento::selectAtuacao(string atuacao)
{
    this->atuacao=atuacao;
    if (this->atuacao == "Ataque")
    {
        arma = "xxxx";
        skillEspecial = "yyyy";
    }
};

void Armamento::escudoAtivado()
{
    setEscudoAtivado(true);
    //this->name = "Alfa";
    //this->type = "Espiã";
    atuacao = "Campo";
    arma = "1111";
    skillEspecial = "22222";
};

void Armamento::escudoDesativado()
{
    setEscudoAtivado(false);
    //this->name = "Beta";
    //this->type = "Espiã";
    atuacao = "Ataque";
    arma = "0000";
    skillEspecial = "3333";
};

void Armamento::printInformations()
{
    Missoes::printInformations();
    cout << "Atuação: " << this->atuacao << "\n";
    cout << "Arma: " << this->arma << "\n";
    cout << "Skill Especial: " << this->skillEspecial << "\n";
}

