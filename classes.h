using namespace std;


#ifndef classes_h
#define classes_h


class Element{

    
      int x;
      int y;
      bool touche;
      public:
             
             Element(int,int); 
             virtual bool estTouche();
             virtual int avance(int,int);
             virtual void affiche();
             void setX(int);
             int getX();
             void setY(int);
             int getY();
             void setTouche(bool);
             bool getTouche();
             void afficheTouche();
             
};


class Bateau{
      
      protected: 
      Element* elements[3];
      int taille;
      bool horizontal;
      char nomBateau[30];
      
      public:
              Bateau(int ,int , bool, int );
              virtual int estTouche(int,int);
              virtual int avance(int,int,int,int);
              virtual void affiche();
              Bateau();
             ~Bateau();
              Bateau(const Bateau&);
              int getTaille();
              double getLignes();
              double getColonnes();
              bool getHorizontal();
              void setHorizontal(bool b);
              char* getNom();
              void setNom(char nom[]);
              Element* getElementById(int i);
      
};


class Croiseur: public Bateau{

      public:
             Croiseur(int,int,bool,char*);
             Croiseur();
            ~Croiseur();
      
};


class Escorteur: public Bateau{

      public:
             Escorteur(int,int,bool,char*);
             Escorteur();
            ~Escorteur();
      
};


class SousMarin: public Bateau{

      public:
             SousMarin(int,int,bool,char*);
             SousMarin();
            ~SousMarin();
             virtual int estTouche(int,int);
             virtual int avance(int,int,int,int);
             virtual void affiche();

      
      
};


class Tableau{
      
      int colonnes;
      int lignes;
      Bateau *listeBateaux[50];
      int nbBateaux;
      
      public:
             Tableau();
            ~Tableau();
             Tableau(int,int);
             int ajouterBateau(Bateau *);
             void enleverBateau(Bateau *);
             int coup(int,int);
             int getLignes();
             int getColonnes();
             void setNbBateaux(int i);
             int getNbBateaux();
             Bateau* getListe(int i);
           
};

#endif
