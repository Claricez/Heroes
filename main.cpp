#include <iostream>
#include <string>
#include  <bits/stdc++.h>
#include <vector>

using std::string;
using std::cout;
using std::ostream;
using std::vector;

#include "heroes.h"
#include "heroes.cpp"

#include "partida.h"
#include "partida.cpp"
#include "Battle.h"
#include "Battle.cpp"   

#include "Villains.h"
#include "Villains.cpp"
#include "personagem.h"
#include "personagem.cpp"
#include "armamento.h"
#include "armamento.cpp"
#include "missoes.h"
#include "missoes.cpp"
#include "combate.h"
#include "combate.cpp"


void avaliarAparelho( Missoes *);
int main(int argc, char **argv)
{

   TIME time01;
   
      time01.atacante = "Black Widow";
      time01.defensor = "Rougue";
      time01.capitao = "Ms Marvel";

   TIME time02;
      time02.atacante = "Mystique";
      time02.defensor = "Magneto";
      time02.capitao = "Mystique";

   
   //Heroes herois("Mutant", 60, 120, time01, 1);
   Villains viloes1(12, "Alta poder de metamorfose, fator de cura", 200, 150, 10, "Irmandade dos Mutantes", "Mystique", time02);
   Villains *viloes1Ptr = &viloes1;
   //Partida time1(time01, 1);
   //Partida time2(time02, 2);

   Personagem personagem("Caveira Vermelha", "Humano modficado", time01, time02);
   Villains viloes2(12, "HIDRA", 150, 200, 10, "Caveira Vermelha", "Lider do 3º HEICH", time02);
   //cout << herois;
   //cout << time1;
   //cout << viloes1;
   
   //cout << time2;
   //cout << herois;
   //cout << jogo2;

/**
   Armamento *ptr = new Armamento("Campo", "Beta", "Defesa");

   vector< Missoes *> armas;

      armas.push_back( new Armamento("Campo", "Beta", "Defesa"));

   for (Missoes *armas: armas)
      avaliarAparelho( armas );

   for( Missoes *armas: armas)
      delete armas;
   
   delete ptr;

   return 0;

   vector <Missoes *> missoes(2);

   missoes[0] = new Armamento("eeee", "aaa", "ddddd","ssssss", "rfdfgrf");
   missoes[1] = new Armamento("ssss", "gggg", "xxxx", "efffdf", "ffff");

   for (size_t i = 0; i < missoes.size(); i++)
   {
      missoes[i]->printInformations();
      Armamento *derivedPtr = dynamic_cast<Armamento *>(missoes[i]);
      string arma= derivedPtr->getArma();
      cout << arma << " Usando dynamic_cast" << "\n";
      string skillEspecial = derivedPtr->getSkillEspecial();
      cout << skillEspecial << " Usando dynamic_cast" << "\n";
      string type = derivedPtr->getType();
      cout << type << " Usando dynamic_cast" << "\n";
      string atuacao = derivedPtr->getAtuacao();
      cout << atuacao << " Usando dynamic_cast" << "\n";
      
   }

   for ( size_t j = 0; j < missoes.size(); j++ )
{
	// output class name
  cout << "deleting object of "
       << typeid( *missoes[ j ] ).name() << std::endl;

  delete missoes[ j ];
} // end for

return 0;
*/

Battle batalha(300, 10, time01, time02, 1);
//cout << batalha;
batalha.danoTime1();
//cout << batalha;

 Armamento *ptr = new Armamento("Poder Mágico", "Supremo","Alfa","Missão de campo","Defender");

   vector< Missoes *> armas;

      armas.push_back( new Armamento("Poder Mágico", "Supremo","Alfa","Missão de campo","Defender"));

   for (Missoes *armas: armas)
      avaliarAparelho( armas );

   for( Missoes *armas: armas)
      delete armas;
   
   delete ptr;

   return 0;

}

void avaliarAparelho(Missoes *armas ){
   cout << "--------------------" << "\n";
   armas->printInformations();
   cout << (armas->isEscudoAtivo()? "O escudo foi ativado":
   "O escudo foi desativado") << "\n";
   cout << "---------------------" << "\n";
}



