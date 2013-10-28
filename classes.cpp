#include <cstdlib>
#include <iostream>
#include "classes.h"
 

using namespace std;


//METHODES DE LA CLASSE Element


void Element::affiche(){
     cout<<"Les coordonnées du point :\n";
     cout<<getX()<<"    "<<getY();
}

Element::Element(int x, int y){
     this->x=x;
     this->y=y;
     this->touche=false;
}


int Element::avance(int dx, int dy){
    x+=dx;
    y+=dy;
    return 2; 
}

bool Element::estTouche(){
     return touche;
}

 
void Element::setX(int el){
     this->x=el;
}

int Element::getX(){
return this->x;
}

void Element::setY(int el){
     this->y=el;
}

int Element::getY(){
    return this->y;

}

void Element::setTouche(bool el){
     this->touche=el;
}

bool  Element::getTouche(){
      return this->touche;
}

void Element::afficheTouche(){
     if(this->touche==1)cout<<"Element Touché\n";
     else 
     cout<<"Element Saint\n";
}


// METHODES DE LA CLASSE Bateau



void Bateau::affiche(){
     cout<<"Les coordonnées du point de ce bateau:\n";
     for(int i=0;i<taille;i++){
        cout<<elements[i]->getX()<<" "<<elements[i]->getY()<<"\n";
     }
}

Bateau::Bateau(int x, int y, bool horiz, int t){

     horizontal=horiz;
     taille=t;
     for(int i=0; i<t+1; i++){
        if(horizontal)
             elements[i]=new Element(x+i,y);
        else
             elements[i]=new Element(x,y+i);
     }
}


int Bateau::estTouche(int px, int py){
    int tmp=0,cpt=0; int tai=getTaille();
    for(int i=0;i<taille;i++){
         if(elements[i]->estTouche())tai--;
         if(elements[i]->getX()==px && elements[i]->getY()==py){
              if(elements[i]->estTouche()){
              tmp=1; // element px, py touché
              }
              else{
                   tmp=2;
                   tai--;
                   elements[i]->setTouche(true);
                                                                      
                   }
        }
    }
 
    if(tai==0){ 
    return 3; // bateau coulé (tous les elements touchés
    }
    else{
    return tmp;
    }
 
}



Bateau::Bateau(){
}

Bateau::~Bateau(){
}


double Bateau::getLignes(){
       return this->elements[0]->getX();
}

double Bateau::getColonnes(){
       return this->elements[0]->getY();
}

Bateau::Bateau(const Bateau& b){
       this->taille=b.taille;
       this->horizontal=b.horizontal;
       for(int i=0;i<taille;i++){
        this->elements[i]=b.elements[i];
       }              
}


int Bateau::getTaille(){
    return this->taille;
}


int  Bateau::avance(int ia, int ja, int x, int y){
     for(int i=0; i<taille; i++){
     if((elements[i]->getX()+ia>x) || (elements[i]->getY()+ja>y) || (elements[i]->getX()+ia<0) || (elements[i]->getY()+ja<0))
         return 1;
     }
     for(int i=0; i<taille; i++){
         elements[i]->setX(elements[i]->getX()+ia);
         elements[i]->setY(elements[i]->getY()+ja);
     }
  
         return 2;

}



Element* Bateau::getElementById(int i){
         return this->elements[i];
}

void Bateau::setHorizontal(bool b){
     this->horizontal=b;
}

bool Bateau::getHorizontal(){
     return this->horizontal;
}


char* Bateau::getNom(){
       return this->nomBateau;
}

void Bateau::setNom(char nom[]){
     strcpy(this->nomBateau,nom);
}



// METHODES POUR LA CLASSE SousMarin


void SousMarin::affiche(){
   cout<<"Les coordonnées des points du sousmarin:\n";
   cout<<elements[0]->getX()<<"    "<<elements[0]->getY()<<"\n";
}


SousMarin::SousMarin(int i,int j,bool b,char*c){
   this->elements[0]->setX(i);
   this->elements[0]->setY(j);
   this->setHorizontal(b);
   this->setNom(c);
   this->taille=1;

}


int SousMarin::estTouche(int i, int j){
    if(this->getHorizontal()!=0){
       elements[0]->setTouche(0);
       return 0;
    }
    else
    if(elements[0]->getX()==i && elements[0]->getY()==j){
       elements[0]->setTouche(true);
       return 3;
    }
}

 


int SousMarin::avance(int i, int j, int x, int y){
    if(this->getHorizontal()){
       return 0; //en plongee
    }
    else
    if(elements[0]->getX()+i>x || elements[0]->getY()+j>y || elements[0]->getX()+i<0 || elements[0]->getY()+j<0){
                 return 1; // desole taille superieure au tableau";
    return false;
     }
                 
     elements[0]->setX(elements[0]->getX()+i);
     elements[0]->setY(elements[0]->getY()+j);
     return 2; //deplacement bien effectué
               
}


SousMarin::SousMarin(){
}

SousMarin::~SousMarin(){
}


//METHODES POUR LA CLASSE Croiseur


Croiseur::Croiseur(int x, int y, bool b,char*c){
    this->taille=3;
    this->horizontal=b;
    this->setNom(c);
    for(int i=0; i<3; i++){
        if(horizontal)
             elements[i]=new Element(x+i,y);
        else
             elements[i]=new Element(x,y+i);
    }

}



Croiseur::~Croiseur(){
}


//METHODES POUR LA CLASSE Escorteur


Escorteur::Escorteur(int x, int y, bool b,char*c){
    this->taille=2;
    this->horizontal=b;
    this->setNom(c);
    for(int i=0; i<3; i++){
        if(horizontal)
             elements[i]=new Element(x+i,y);
        else
             elements[i]=new Element(x,y+i);
    }

}


Escorteur::Escorteur(){
}

Escorteur::~Escorteur(){
}



// METHODES POUR LA CLASSE Tableau


Tableau::Tableau(){
}


Tableau::~Tableau(){
}

Tableau::Tableau(int l, int c){
     lignes=l;
     colonnes=c;
     for(int i=0;i<20;i++){
        this->listeBateaux[i]=NULL;
     }
     this->nbBateaux=0;
}


void Tableau::setNbBateaux(int i){
     this->nbBateaux=i;
}

int Tableau::getNbBateaux(){
     return this->nbBateaux;
}


int Tableau::getLignes(){
    return this->lignes;
}
    
int Tableau::getColonnes(){
    return this->colonnes;
}
    
int Tableau::coup(int x, int y){
    int vari,cptr=0;
    if((this->getLignes()<x) || (this->getColonnes()<y) || (x<0 || y<0)){
         return -1;
    }
    else
    {
        for(int i=0;i<this->getNbBateaux();i++){
                switch((listeBateaux[i]->estTouche(x,y))){
                     case 1:return 1;
                     case 2:return 2;
                     case 3:
                           enleverBateau(listeBateaux[i]);
                           return 3;
                }
        }  
        return 0;                                     
    }

}


int Tableau::ajouterBateau(Bateau *b){
     if((b->getLignes()>this->lignes)|| (b->getColonnes()>this->colonnes) || (b->getColonnes()<0 || (b->getLignes()<0) )){
         return 0;
         }
         else
         { 
              this->listeBateaux[this->getNbBateaux()]= b;
              this->setNbBateaux(this->getNbBateaux()+1);
              return 1;
         }
}


void Tableau::enleverBateau(Bateau *b){
  for(int i=0;i<nbBateaux;i++){
  if(listeBateaux[i]==b){
     listeBateaux[i]=NULL;
     if(i!=nbBateaux-1){
         for(int j=i;j<nbBateaux;j++){
         listeBateaux[j]=listeBateaux[j+1];
         }
                                                      
     }
     nbBateaux--;
  }
  }        
}

Bateau* Tableau::getListe(int i){
        return this->listeBateaux[i];
}
