#include <iostream>
#include <string>
#include "Battle.h"
#include "Battle.cpp"

int main(){
    Battle qtdBatalha(4);
    Battle qtdBatalha1(7);

    cout << "Atribuindo quantidade de personagens na batalha" << "\n"; 
    qtdBatalha = qtdBatalha1;
    cout << "\nEquipe 01:" << qtdBatalha
         << "\nEquipe 02: " << qtdBatalha1;

    if (qtdBatalha == qtdBatalha)
        cout << "Batalha Justa";
}