/*
  PROJET DE C++
  BATAILLE NAVALE
  REALISE PAR LODJEU CHRISTIAN  21040
           ET SIEWE NJELE ARMEL  21058   
  COPYRIGHT: JUIN 2010
*/ 


using namespace std;

#include <iostream>
#include <iomanip>
#include <cstdlib>
 
#include "bataille.h"
#include "classes.h"
 

// PROGRAMME PRINCIPAL


int main(int argc, char *argv[])
{   
 
 int choix,choix2;
 loading();
 graphique();
 animation();
 callanimation2();

 do{
       
         graphiqueMenu();
         cin>>choix;
       
         switch (choix){
            case 1:ajouterBateauFlotte();break;
            case 2:TirerCoup();break;
            case 3:DeplacerBateau();break;
            case 4:plongerSousMarin();break;
            case 5:monterSousMarin();break;
         }
      }
      while(choix != 6);
 
}

