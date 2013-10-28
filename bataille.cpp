

#include <cstdlib>
#include <iostream>
#include "myconio.h"
#include "bataille.h"



using namespace std;


char typeBateau;
Tableau*tab=new Tableau(28,18); 

 
void defilmot2(int nbre){
      printf("%c",nbre);
}
 
void defilmot(char*texte){
     int i;
     for (i=0;i<strlen(texte);i++){
        system("color 0");
        printf("%c",texte[i]);
     }
}



void graphique(){

     system("cls");
  
     int i,j,b;

     system("color 21");
     Sleep(1500);
     system("color c1");
     Sleep(1500);
     system("color e1");
     Sleep(1500);

     for(i=8;i<72;i++){
       system("color 0c");
       gotoxy(i,8);defilmot2(205);
       gotoxy(i,22);defilmot2(205);
     }
 
     for(j=8;j<22;j++){
     system("color 0c");
     gotoxy(8,j);defilmot2(186);
     gotoxy(72,j);defilmot2(186);
     } 
 
       system("color 02");
       gotoxy(8,22);defilmot2(200);
       gotoxy(8,8);defilmot2(201);
       gotoxy(72,8);defilmot2(187);
       gotoxy(72,22);defilmot2(188);
       gotoxy(19,10);

       system("color 0f");
       
       defilmot("     PROGRAMMATION ORIENTEE OBJET I C++");
       gotoxy(20,11);
       defilmot("             BATAILLE NAVALE");
       gotoxy(18,14);
       defilmot("     REALISE PAR   LODJEU CHRISTIAN 21040");
       gotoxy(37,15);
       defilmot("SIEWE NJELE ARMEL 21058");
       gotoxy(19,17);
       defilmot("   SOUS LA SUPERVISION DE Dr. BONDE LOSSAN");
       gotoxy(43,18);
       defilmot("  Dr. MVOGO");
       gotoxy(22,20);
      
      system("color 1f");
        
      system("pause");
      system("cls");

}


// FONCTION display() qui permet d'afficher le contenu de la flotte
     
     
void display(){
      textbackground(0);          
      int i,j,b;
 
 
 system("color 03");

  for(j=3;j<13;j++)
 {
 
    gotoxy(4,j);printf("%d-",j-3) ;
    
 }
   for(j=13;j<22;j++)
 {
 
    gotoxy(3,j);printf("%d-",j-3) ;
    
 }
 
   for(j=7;j<36;j++)
 {
 
    gotoxy(j,1);printf("|") ;
    
 }
 
 
 //debut cadre
 
 for(i=6;i<36;i++)
 {
 
   gotoxy(i,2);defilmot2(205);
   gotoxy(i,22);defilmot2(205);
 }
 
  for(j=2;j<22;j++)
 {
 
    gotoxy(6,j);defilmot2(186);
    gotoxy(36,j);defilmot2(186);
 }
 
 
   gotoxy(6,22);defilmot2(200);
   gotoxy(6,2);defilmot2(201);
   gotoxy(36,2);defilmot2(187);
   gotoxy(36,22);defilmot2(188);
   gotoxy(19,10); 

 

// elements de la flotte

 
  for(int i=0;i<tab->getNbBateaux();i++){
          
        if(tab->getListe(i)->getTaille()==1){
                               
            gotoxy(tab->getListe(i)->getElementById(0)->getX()+7,tab->getListe(i)->getElementById(0)->getY()+3);
            

            if((tab->getListe(i)->getHorizontal())){

              textbackground(1);
               textcolor(15);
               printf("S");  
                
            }
            else
            if(!(tab->getListe(i)->getHorizontal()))
            {
               textbackground(2);
               textcolor(15);
               printf("S");  
            }
             
            
        }          
  
        if(tab->getListe(i)->getTaille()==2){
          
            gotoxy(tab->getListe(i)->getElementById(0)->getX()+7,tab->getListe(i)->getElementById(0)->getY()+3);
            if(tab->getListe(i)->getElementById(0)->getTouche()==1){
               textbackground(12);
               textcolor(15);
               cout<<"E";
               }
               else
               { 
               textbackground(2);
               textcolor(15);cout<<"E";
               }
                                                                        
               gotoxy(tab->getListe(i)->getElementById(1)->getX()+7,tab->getListe(i)->getElementById(1)->getY()+3);
                  if(tab->getListe(i)->getElementById(1)->getTouche()==1){
                  textbackground(12);
                  textcolor(15);
                  cout<<"E";}
                  else
                  { 
                  textbackground(2);
                  textcolor(15);cout<<"E";
                  }

         }
      
         else  
         if(tab->getListe(i)->getTaille()==3){
           
             gotoxy(tab->getListe(i)->getElementById(0)->getX()+7,tab->getListe(i)->getElementById(0)->getY()+3);
             if(tab->getListe(i)->getElementById(0)->getTouche()==1){
             textbackground(12);
             textcolor(15);
             cout<<"C";
             }
             else
             { 
             textbackground(2);
             textcolor(15);cout<<"C";
             }
                                                                        
             gotoxy(tab->getListe(i)->getElementById(1)->getX()+7,tab->getListe(i)->getElementById(1)->getY()+3);
                  if(tab->getListe(i)->getElementById(1)->getTouche()==1){
                  textbackground(12);
                  textcolor(15);
                  cout<<"C";
                  }
                  else
                  { 
                  textbackground(2);
                  textcolor(15);cout<<"C";
                  }
                                                                        
             gotoxy(tab->getListe(i)->getElementById(2)->getX()+7,tab->getListe(i)->getElementById(2)->getY()+3);
                  if(tab->getListe(i)->getElementById(2)->getTouche()==1){
                  textbackground(12);
                  textcolor(15);
                  cout<<"C";
                  }
                  else
                  { 
                  textbackground(2);
                  textcolor(15);cout<<"C";
                  } 
 

        
         }
        }

 
    
 
textbackground(0);

}

//fin de display


void loading(){
     
          int i;
          gotoxy(35,17);
         

          printf("chargement...\n");
          
          gotoxy(30,18);
          for(i=0;i<20;i++){
            textcolor(8);
            printf("%c",219);
			 Sleep(40);
                 
          }
		 
          gotoxy(30,18);
          for(i=0;i<20;i++){
                          
            textcolor(7);
            printf("%c",219);
            Sleep(40);
          }
          gotoxy(30,18);
          for(i=0;i<20;i++){
            textcolor(8);
            printf("%c",219);
			Sleep(40);
          }
          gotoxy(30,18);
          for(i=0;i<20;i++){
            textcolor(7);
            printf("%c",219);			
			Sleep(40);          
		  }
          gotoxy(30,18);
          for(i=0;i<20;i++){
            textcolor(8);
            printf("%c",219);
            Sleep(40);
          }
          gotoxy(30,18);
          for(i=0;i<20;i++){
            textcolor(7);
            printf("%c",219);
			Sleep(40);
          }
          gotoxy(30,18);
          for(i=0;i<20;i++){
            textcolor(8);
            printf("%c",219);
			Sleep(40);
			
          }
   Sleep(500); 
} 
 

void graphiqueMenu(){
     
 int i,j;
     
//debut cadre du menu

 textbackground(0);

for(i=40;i<79;i++)
 {
    
   gotoxy(i,2);textcolor(15);defilmot2(205);
   gotoxy(i,22);textcolor(15);defilmot2(205);
 }
 
  for(j=2;j<22;j++)
 {
   
    gotoxy(40,j);textcolor(15);defilmot2(186);
    gotoxy(79,j);textcolor(15);defilmot2(186);
 }
 
 
   gotoxy(40,22);textcolor(15);defilmot2(200);
   gotoxy(40,2);textcolor(15);defilmot2(201);
   gotoxy(79,2);textcolor(15);defilmot2(187);
   gotoxy(79,22);textcolor(15);defilmot2(188);
   gotoxy(19,10); 

   display();
    
     for(int i=41;i<79;i++){
     gotoxy(i,4);
     textbackground(3);
     printf(" ");
     }
          for(int i=41;i<79;i++){
     gotoxy(i,3);
     textbackground(15);
     printf(" ");
     }
          for(int i=41;i<79;i++){
     gotoxy(i,5);
     textbackground(15);
     printf(" ");
     }
     textcolor(3);
     gotoxy(51,4);printf("  BATAILLE NAVALE  ");
     textcolor(15); 
     textbackground(0);
     gotoxy(42,7);printf("                                    ");
     gotoxy(42,9);printf("                                    ");
     gotoxy(42,12);printf("                                    ");
     gotoxy(44,8);printf("1. Ajouter un Bateau a la flotte");
     gotoxy(44,10);printf("2. Tirer Un Coup ");
     gotoxy(44,12);printf("3. Deplacer un bateau ");
     gotoxy(44,14);printf("4. Plonger un sousMarin ");
     gotoxy(44,16);printf("5. Remonter un sousMarin ");
     gotoxy(44,18);printf("6. Quitter ");
   
     textbackground(15);
 
     gotoxy(41,20);printf("                                      ");
     textcolor(3);
     gotoxy(51,20);defilmot("ENTRER VOTRE CHOIX :");
 
     gotoxy(72,20);
     textcolor(3);
 
   
    
}


void graphiqueSousMenu(){
     int i,j;
     
//debut cadre du menu

 textbackground(0);
 for(i=40;i<79;i++)
 {
    
   gotoxy(i,2);textcolor(15);defilmot2(205);
   gotoxy(i,22);textcolor(15);defilmot2(205);
 }
 
  for(j=2;j<22;j++)
 {
   
    gotoxy(40,j);textcolor(15);defilmot2(186);
    gotoxy(79,j);textcolor(15);defilmot2(186);
 }
 
 
   gotoxy(40,22);textcolor(15);defilmot2(200);
   gotoxy(40,2);textcolor(15);defilmot2(201);
   gotoxy(79,2);textcolor(15);defilmot2(187);
   gotoxy(79,22);textcolor(15);defilmot2(188);
   gotoxy(19,10); 


    
     for(int i=41;i<79;i++){
     gotoxy(i,5);
     
     printf("%c",205);
     }
     textcolor(3);
     gotoxy(52,4);printf("BATAILLE NAVALE");
     textcolor(15);

     textbackground(0); 
    
}

//fin cadre du menu


// fonction d'animation 

void animation(){
     
// lettre B
 
for(int i=2;i<10;i++){
        gotoxy(5,i);
        printf("*");
        Sleep(30);
} 
for(int i=5;i<13;i+=2){
        gotoxy(i,2);
        printf("*");
        Sleep(30);
} 
for(int i=3;i<6;i++){
        gotoxy(12,i);
        printf("*");
        gotoxy(12,i+4);
        printf("*");
        Sleep(30);
}

for(int i=5;i<12;i+=2){
        gotoxy(i,6);
        printf("*");
        gotoxy(i,10);
        printf("*");
        Sleep(30);
}

//lettre E

for(int i=2;i<11;i++){
        gotoxy(68,i);
        printf("*");
        Sleep(30);

}

for(int i=68;i<76;i+=2){
        gotoxy(i,2);
        printf("*");
        Sleep(30);
}

for(int i=68;i<76;i+=2){
        gotoxy(i,6);
        printf("*");
        Sleep(30);
}

for(int i=68;i<76;i+=2){
        gotoxy(i,10);
        printf("*");
        Sleep(30);
}
//lettre A

 
for(int i=2;i<11;i++){
        gotoxy(15,i);
        printf("*");
        gotoxy(21,i);
        printf("*");
        Sleep(30);
} 

for(int i=15;i<21;i+=2){
        gotoxy(i,2);
        printf("*");
        gotoxy(i,6);
        printf("*");
        Sleep(30);
}  


//lettre L

for(int i=2;i<11;i++){
        gotoxy(59,i);
        printf("*");
        Sleep(30);

}

for(int i=59;i<66;i+=2){
        gotoxy(i,10);
        printf("*");
        Sleep(30);
}

 
// lettre T

for(int i=2;i<11;i++){
        gotoxy(28,i);
        printf("*");
        Sleep(30);
}


for(int i=24;i<34;i+=2){
        gotoxy(i,2);
        printf("*");
        Sleep(30);
}


//lettre L

for(int i=2;i<11;i++){
        gotoxy(49,i);
        printf("*");
        Sleep(30);

}

for(int i=49;i<56;i+=2){
        gotoxy(i,10);
        printf("*");
        Sleep(30);
}

 
//lettre A

for(int i=2;i<11;i++){
        gotoxy(35,i);
        printf("*");
        gotoxy(41,i);
        printf("*");
        Sleep(30);
} 

for(int i=35;i<41;i+=2){
        gotoxy(i,2);
        printf("*");
        gotoxy(i,6);
        printf("*");
        Sleep(30);
}  

for(int i=2;i<11;i++){
        gotoxy(35,i);
        printf("*");
        Sleep(30);
}
//lettre I

for(int i=2;i<11;i++){
        gotoxy(45,i);
        printf("*");
        Sleep(30);

}



// fin de BATAILLE


// lettre V
 
for(int i=15;i<18;i++){
        gotoxy(29,i);
        printf("*");
        gotoxy(37,i);
        printf("*");
        Sleep(30);
} 

gotoxy(30,18); printf("*");
gotoxy(36,18); printf("*");
gotoxy(30,19); printf("*");
gotoxy(36,19); printf("*");
gotoxy(31,20); printf("*");
gotoxy(35,20); printf("*");
gotoxy(31,21); printf("*");
gotoxy(35,21); printf("*");
gotoxy(32,22); printf("*");
gotoxy(34,22); printf("*");
gotoxy(33,23); printf("*");
        Sleep(30);
//lettre A

for(int i=15;i<24;i++){
        gotoxy(41,i);
        printf("*");
        gotoxy(47,i);
        printf("*");
        Sleep(30);
} 

for(int i=41;i<46;i+=2){
        gotoxy(i,15);
        printf("*");
        gotoxy(i,19);
        printf("*");
        Sleep(30);
}  

for(int i=15;i<24;i++){
        gotoxy(19,i);
        printf("*");
        Sleep(30);
}


//lettre A

 
for(int i=15;i<24;i++){
        gotoxy(19,i);
        printf("*");
        gotoxy(25,i);
        printf("*");
        Sleep(30);
} 

for(int i=19;i<25;i+=2){
        gotoxy(i,15);
        printf("*");
        gotoxy(i,19);
        printf("*");
        Sleep(30);
}  

for(int i=15;i<24;i++){
        gotoxy(19,i);
        printf("*");
        Sleep(30);
}


//lettre L


for(int i=15;i<24;i++){
        gotoxy(51,i);
        printf("*");
        Sleep(30);

}

for(int i=53;i<58;i+=2){
        gotoxy(i,23);
        printf("*");
        Sleep(30);
}


//lettre N
 
for(int i=15;i<24;i++){
        gotoxy(8,i);
        printf("*");
        gotoxy(15,i);
        printf("*");
        Sleep(30);

}
        
        gotoxy(10,16); printf("*");
        gotoxy(11,17); printf("*");
        gotoxy(12,18); printf("*");
        gotoxy(13,19); printf("*");
        gotoxy(14,20); printf("*");
        Sleep(30);


//lettre E

for(int i=15;i<24;i++){
        gotoxy(61,i);
        printf("*");
        Sleep(30);

}

for(int i=61;i<69;i+=2){
        gotoxy(i,15);
        printf("*");
        Sleep(30);
}

for(int i=61;i<69;i+=2){
        gotoxy(i,19);
        printf("*");
        Sleep(30);
}

for(int i=61;i<69;i+=2){
        gotoxy(i,23);
        printf("*");
        Sleep(30);
}
 
printf("\n");
printf("\n");


gotoxy(20,25);
}


// fin animation

//debut animation2




//animation2

 

void animation2(){
 Sleep(10);    

// lettre B
 
for(int i=2;i<10;i++){
     
        gotoxy(5,i);
        printf("*");
         
} 
for(int i=5;i<13;i+=2){
       
        gotoxy(i,2);
        printf("*");
         
} 
for(int i=3;i<6;i++){
       
        gotoxy(12,i);
        printf("*");
        gotoxy(12,i+4);
        printf("*");
         
}

for(int i=5;i<12;i+=2){
        
        gotoxy(i,6);
        printf("*");
        gotoxy(i,10);
        printf("*");
         
}

//lettre E

for(int i=2;i<11;i++){
       
        gotoxy(68,i);
        printf("*");
         

}

for(int i=68;i<76;i+=2){
      
        gotoxy(i,2);
        printf("*");
         
}

for(int i=68;i<76;i+=2){
      
        gotoxy(i,6);
        printf("*");
         
}

for(int i=68;i<76;i+=2){
        
        gotoxy(i,10);
        printf("*");
         
}
//lettre A

 
for(int i=2;i<11;i++){
      
        gotoxy(15,i);
        printf("*");
        gotoxy(21,i);
        printf("*");
         
} 

for(int i=15;i<21;i+=2){
       
        gotoxy(i,2);
        printf("*");
        gotoxy(i,6);
        printf("*");
         
}  


//lettre L

for(int i=2;i<11;i++){
       
        gotoxy(59,i);
        printf("*");
         

}

for(int i=59;i<66;i+=2){
        
        gotoxy(i,10);
        printf("*");
         
}

 
// lettre T

for(int i=2;i<11;i++){
         
        gotoxy(28,i);
        printf("*");
         
}


for(int i=24;i<34;i+=2){
     
        gotoxy(i,2);
        printf("*");
         
}


//lettre L

for(int i=2;i<11;i++){
     
        gotoxy(49,i);
        printf("*");
         

}

for(int i=49;i<56;i+=2){
      
        gotoxy(i,10);
        printf("*");
         
}

 
//lettre A

for(int i=2;i<11;i++){
       
        gotoxy(35,i);
        printf("*");
        gotoxy(41,i);
        printf("*");
         
} 

for(int i=35;i<41;i+=2){
   
        gotoxy(i,2);
        printf("*");
        gotoxy(i,6);
        printf("*");
         
}  

for(int i=2;i<11;i++){
      
        gotoxy(35,i);
        printf("*");
         
}
//lettre I

for(int i=2;i<11;i++){
       
        gotoxy(45,i);
        printf("*");
         

}

//debut NAVALE

Sleep(10);
// lettre V
 
for(int i=15;i<18;i++){
      
        gotoxy(29,i);
        printf("*");
        gotoxy(37,i);
        printf("*");
         
} 

 
gotoxy(30,18); printf("*");
gotoxy(36,18); printf("*");
gotoxy(30,19); printf("*");
gotoxy(36,19); printf("*");
gotoxy(31,20); printf("*");
gotoxy(35,20); printf("*");
gotoxy(31,21); printf("*");
gotoxy(35,21); printf("*");
gotoxy(32,22); printf("*");
gotoxy(34,22); printf("*");
gotoxy(33,23); printf("*");
         
//lettre A

for(int i=15;i<24;i++){
       
        gotoxy(41,i);
        printf("*");
        gotoxy(47,i);
        printf("*");
         
} 

for(int i=41;i<46;i+=2){
       
        gotoxy(i,15);
        printf("*");
        gotoxy(i,19);
        printf("*");
         
}  

for(int i=15;i<24;i++){
     
        gotoxy(19,i);
        printf("*");
         
}


//lettre A

 
for(int i=15;i<24;i++){
    
        gotoxy(19,i);
        printf("*");
        gotoxy(25,i);
        printf("*");
         
} 

for(int i=19;i<25;i+=2){
       
        gotoxy(i,15);
        printf("*");
        gotoxy(i,19);
        printf("*");
         
}  

for(int i=15;i<24;i++){
        
        gotoxy(19,i);
        printf("*");
         
}


//lettre L


for(int i=15;i<24;i++){
       
        gotoxy(51,i);
        printf("*");
         

}

for(int i=53;i<58;i+=2){
        
        gotoxy(i,23);
        printf("*");
         
}


//lettre N
 
for(int i=15;i<24;i++){
       
        gotoxy(8,i);
        printf("*");
        gotoxy(15,i);
        printf("*");
         

}
        
        gotoxy(10,16); printf("*");
        gotoxy(11,17); printf("*");
        gotoxy(12,18); printf("*");
        gotoxy(13,19); printf("*");
        gotoxy(14,20); printf("*");
         


//lettre E

for(int i=15;i<24;i++){
       
        gotoxy(61,i);
        printf("*");
         

}

for(int i=61;i<69;i+=2){
        
        gotoxy(i,15);
        printf("*");
         
}

for(int i=61;i<69;i+=2){
        
        gotoxy(i,19);
        printf("*");
         
}

for(int i=61;i<69;i+=2){
     
        gotoxy(i,23);
        printf("*");
         
}
 
printf("\n");
printf("\n");

Sleep(150);
gotoxy(20,25);
}


void callanimation2(){
     
 system("color 0f");
 for(int j=8;j<16;j++){
   textcolor(j);
   animation2();
 }
 for(int j=16;j<8;j--){
   textcolor(j);
   animation2();
 }
 for(int j=8;j<16;j++){
   textcolor(j);
   animation2();
 }
 for(int j=19;j<8;j--){
   textcolor(j);
   animation2();
 }
 for(int j=8;j<16;j++){
   textcolor(j);
   animation2();
 }      
 gotoxy(23,25);
 system("pause");
 system("cls");
}





void ajouterBateauFlotte(){
     int abs,ord,hor,control;
     char q;
     char nom[30];
     system("cls");
     display();
     graphiqueSousMenu();
     
     gotoxy(42,7);defilmot("Entrer le type de bateau (c/e/s) :");
     gotoxy(42,9);printf("p : retour");
     gotoxy(77,7); cin>>typeBateau;

     if(typeBateau=='c' || typeBateau=='C' ){
        textbackground(15);
        gotoxy(41,9);printf("                                      ");
        textcolor(3);                        
        gotoxy(42,9);defilmot("    INFORMATIONS SUR CE CROISEUR   ");
        textbackground(0);
        textcolor(15);
        gotoxy(42,12);printf("Nom de ce Croiseur:");
        gotoxy(62,12); cin>>nom;                                   
        gotoxy(42,13);printf("abscisse du premier element:");
        gotoxy(71,13); cin>>abs;
        gotoxy(42,14);printf("ordonnee du premier element:");
        gotoxy(71,14); cin>>ord;
        gotoxy(42,15);printf("Horizontal ? (1/0) :");
        gotoxy(64,15);cin>>hor;                            
                                    
        Bateau *s1=new Croiseur(abs,ord,hor,nom);
        control=tab->ajouterBateau(s1);
        if(control==0){
            textcolor(14);
            gotoxy(42,18);printf("Votre Croiseur est hors du cadre"); 
            gotoxy(42,19);printf("les limites sont: (0,0) et (28,18)");
            gotoxy(42,20);defilmot("q: sortir");
            textcolor(15);
            gotoxy(52,20);cin>>q;
            system("cls");
        }
        else
        {
             display();
             textbackground(15);
             gotoxy(41,19);printf("                                      ");
             textcolor(3);                        
             gotoxy(44,19);defilmot("Ce Croiseur a bien ete ajoute");
             textbackground(0);
             textcolor(15);
             gotoxy(44,20);defilmot("q: menu principal");
   
             gotoxy(63,20);cin>>q;
             system("cls");
                       
       }
     }
     else
     
     if(typeBateau=='e' || typeBateau=='E' ){
        textbackground(15);
        gotoxy(41,9);printf("                                      ");
        textcolor(3);                        
        gotoxy(42,9);defilmot("    INFORMATIONS SUR CET ESCORTEUR   ");
        textbackground(0);
        textcolor(15);
        gotoxy(42,12);printf("Nom de cet Escorteur:");
        gotoxy(64,12); cin>>nom;
        gotoxy(42,13);printf("abscisse du premier element:");
        gotoxy(71,13);cin>>abs;
        gotoxy(42,14);printf("ordonnee du premier element:");
        gotoxy(71,14);cin>>ord;
        gotoxy(42,15);printf("Horizontal ? (1/0) :");
        gotoxy(64,15);cin>>hor;
                                    
        Bateau *s2=new Escorteur(abs,ord,hor,nom);
        control=tab->ajouterBateau(s2);
        if(control==0){
             textcolor(14);
             gotoxy(42,18);printf("Votre Escorteur est hors du cadre"); 
             gotoxy(42,19);printf("les limites sont: (0,0) et (28,18)");
             gotoxy(42,20);defilmot("q: sortir");
             textcolor(15);
             gotoxy(52,20);cin>>q;
             system("cls");
        }
        else
        {
        display();
        textbackground(15);
        gotoxy(41,19);printf("                                      ");
        textcolor(3);                        
        gotoxy(44,19);defilmot("Cet escorteur a bien ete ajoute");
        textbackground(0);
        textcolor(15);
        gotoxy(44,20);defilmot("q: menu principal");
        gotoxy(63,20);cin>>q;
        }
        system("cls"); 
     }
     else 
     if(typeBateau=='s' || typeBateau=='S' ){
             textbackground(15);
        gotoxy(41,9);printf("                                      ");
        textcolor(3);                        
        gotoxy(42,9);defilmot("    INFORMATIONS SUR CE SOUS-MARIN   ");
        textbackground(0);
        textcolor(15);
        gotoxy(42,12);printf("Nom de ce SousMarin:");
        gotoxy(64,12); cin>>nom;
        gotoxy(42,13);printf("abscisse du premier element:");
        gotoxy(71,13);cin>>abs;
        gotoxy(42,14);printf("ordonnee du premier element:");
        gotoxy(71,14);cin>>ord;
        gotoxy(42,15);printf("Sous-Marin en plonge ? (1/0) :");
        gotoxy(73,15);cin>>hor;
                                    
        Bateau *s3=new SousMarin(abs,ord,hor,nom);
        control=tab->ajouterBateau(s3);
        if(control==0){
              textcolor(14);
              gotoxy(42,18);printf("Votre SousMarin est hors du cadre"); 
              gotoxy(42,19);printf("les limites sont: (0,0) et (28,18)");
              gotoxy(42,20);defilmot("q: sortir");
              textcolor(15);
              gotoxy(52,20);cin>>q;
              system("cls");
        }
        else
        {
         display();
         textbackground(15);
         gotoxy(41,19);printf("                                      ");
         textcolor(3);                        
         gotoxy(44,19);defilmot("Ce Sous-Marin a bien ete ajoute");
         textbackground(0);
         textcolor(15);
         gotoxy(44,20);defilmot("q: menu principal");
         gotoxy(63,20);cin>>q;
         }
     system("cls");
                                                                                                                                            
                                                                       
    }
  
                                    
}                                    
                            
                                                     
void DeplacerBateau(){
   int abs,ord;
   int exit;
   char nom[30];
   system("cls");
   display();
   graphiqueSousMenu();
   int control=0;

   do{ 
        gotoxy(42,7);printf("Entrer le nom du Bateau :");
        gotoxy(68,7);printf("           ");
        gotoxy(42,9);defilmot("s: menu principal");
        gotoxy(68,7); cin>>nom;
      
      
        for(int i=0;i<tab->getNbBateaux();i++){
 
          if(strcmp(tab->getListe(i)->getNom(),nom)==0){
             gotoxy(43,8);printf("                      ");
             control=1;
             textbackground(14);
             textcolor(1);
             gotoxy(42,9);printf("Deplacement de %s :",nom);
             textcolor(15);
             textbackground(0);
             gotoxy(42,11);printf("abscisse du premier element:");
             gotoxy(71,11);cout<<tab->getListe(i)->getElementById(0)->getX();
             gotoxy(42,12);printf("ordonnée du premier element:");
             gotoxy(71,12);cout<<tab->getListe(i)->getElementById(0)->getY();
             gotoxy(42,14);defilmot("Donnees du Vecteur de Translation :");
             gotoxy(42,15);printf("Abscisse (1,-1) :");
             gotoxy(60,15);cin>>abs;
             gotoxy(42,16);printf("Ordonnée (1,-1) :");
             gotoxy(60,16);cin>>ord;
             int ix=tab->getListe(i)->getElementById(0)->getX()+7;
             int yj=tab->getListe(i)->getElementById(0)->getY()+3;
                                    
             tab->getListe(i)->avance(abs,ord,28,18);
             gotoxy(42,18);
			 Sleep(1000);
             textcolor(14);
             
             display();
             gotoxy(42,18);defilmot("Nouvelles coordonnees du premier");
             gotoxy(42,19);printf("Element de %s :",nom);
             textcolor(15);
             gotoxy(70,19);printf("(");cout<<tab->getListe(i)->getElementById(0)->getX();
             gotoxy(74,19);printf(", ");cout<<tab->getListe(i)->getElementById(0)->getY();printf(")");
             gotoxy(42,21);
             defilmot("5: menu principal");
             gotoxy(60,21);cin>>exit;
             system("cls");
                                
          }
        }
    }
    while(control==0 && strcmp(nom,"s")!=0);

     
}
 
     
void TirerCoup(){
     int abs,ord,decision,control;
     int exit;
     char nom[30];
     system("cls");
   
     do{
         display();
         graphiqueSousMenu();
         gotoxy(42,8);defilmot("Entrer les coordonnees du coup :");
         gotoxy(42,10);printf("Abscisse :");
         textbackground(14);textcolor(1);
         gotoxy(52,10);printf("[");
         gotoxy(53,10);printf("  ");
         gotoxy(55,10);printf("]");
         gotoxy(53,10);cin>>abs;
         textbackground(0);textcolor(15);
         gotoxy(42,12);printf("Ordonnee :");
         textbackground(14);textcolor(1);
         gotoxy(52,12);printf("[");
         gotoxy(53,12);printf("  ");
         gotoxy(55,12);printf("]");
         gotoxy(53,12);cin>>ord;
         if(ord>18 || abs>28 || ord<0 || abs<0){
           gotoxy(42,15);
           printf("le coup est hors du cadre");
         }
         textbackground(0);textcolor(15);
         
         control=tab->coup(abs,ord);
         for(int i=0;i<2;i++){
            gotoxy(abs+7,ord+3);
            printf("%c",15);
         }
		 Sleep(1500);
         
         display();
         if(control==0){
              textbackground(7);
              gotoxy(41,15);printf("                                      ");
              textcolor(1);
              gotoxy(48,15);defilmot("Votre coup est dans l'eau");
              textcolor(15);
              textbackground(0);
         }
         else 
         if(control==2){
           for(int j=0;j<5;j++){
                   
              textbackground(14);
              gotoxy(41,15);printf("                                      ");
              textcolor(1);
              gotoxy(41,15);printf("%c",1);printf("  Bravo !!! un element toucher  ");printf("%c",1);
              textcolor(15);
              textbackground(0);
              Sleep(200);
                                 
              textbackground(7);
              gotoxy(41,15);printf("                                      ");
              textcolor(4);
              gotoxy(43,15);printf("%c",1);printf("  Bravo !!! un element toucher  ");printf("%c",1);
              textcolor(15);
              textbackground(0);
              Sleep(200);
  
           }
         }
         else 
         if(control==1){
              textbackground(7);
              gotoxy(41,15);printf("                                      ");
              textcolor(3);
              gotoxy(43,15);defilmot("vous avez deja toucher cet element");
              textcolor(15);
              textbackground(0);
         }
         else 
         if(control==3){
              textbackground(7);
              gotoxy(41,15);printf("                                      ");
              textcolor(12);
              gotoxy(45,15);defilmot("vous venez de couler ce bateau");}
              textcolor(15);
              textbackground(0);
              gotoxy(42,17);
              printf(" 1: recommencer ");
              gotoxy(42,18);
              printf(" 0: menu principal ");
              gotoxy(62,18);
              cin>>decision;
              system("cls");
     }
     while(decision!=0);
   
}


void plongerSousMarin(){

 
   int exit;
   char nom[30];
   system("cls");
   display();
   graphiqueSousMenu();
   int control=0;

   do{ 
        gotoxy(42,7);printf("Nom du SousMarin a plonger ");
        gotoxy(70,7);printf("         ");
        gotoxy(42,9);defilmot("s: menu principal");
        gotoxy(70,7); cin>>nom;
      
      
        for(int i=0;i<tab->getNbBateaux();i++){
 
          if(strcmp(tab->getListe(i)->getNom(),nom)==0){
          if(tab->getListe(i)->getTaille()!=1)
          {
             textbackground(3);
             textcolor(15); 
             gotoxy(41,12);printf("                                      ");
             gotoxy(45,12);
             printf("Ce Bateau n'est pas un SousMarin");
             Sleep(2000);
             textbackground(0);
             gotoxy(41,12);
             printf("                                      ");
             textcolor(15);
             gotoxy(42,15);
          }
          else
          if(tab->getListe(i)->getHorizontal()){
                                                
             gotoxy(45,12);
             textbackground(14);
             textcolor(1); 
             gotoxy(41,12);printf("                                      ");
             gotoxy(43,12);printf("Ce SousMarin est deja en plongee");
             Sleep(2000);
             textbackground(0);
             gotoxy(41,12);printf("                                      ");
             textcolor(15);
             gotoxy(42,15);          
          }
          else                                      
          {  
             control=1;
             tab->getListe(i)->setHorizontal(true);
             display();
             gotoxy(41,12);printf("                                      ");
             
             gotoxy(41,13);
             textbackground(1);
             textcolor(15);
             
             printf("Ce SousMarin est Maintenant en Plongee");
             textbackground(0);
             textcolor(15);
             gotoxy(42,15);
             printf("5: menu principal");
             gotoxy(60,15);
             cin>>exit;

             system("cls");
                                
          }
          }
        }
    }
    while(control==0 && strcmp(nom,"s")!=0);

     
}

void monterSousMarin(){
     
   int exit;
   char nom[30];
   system("cls");
   display();
   graphiqueSousMenu();
   int control=0;

   do{ 
        gotoxy(42,7);printf("Nom du SousMarin a remonter ");
        gotoxy(70,7);printf("         ");
        
        gotoxy(42,9);defilmot("s: menu principal");
        gotoxy(70,7); cin>>nom;
      
      
        for(int i=0;i<tab->getNbBateaux();i++){
 
          if(strcmp(tab->getListe(i)->getNom(),nom)==0){
          if(tab->getListe(i)->getTaille()!=1)
          {
             
             textbackground(3);
             textcolor(15); 
             gotoxy(41,12);printf("                                      ");
             gotoxy(45,12);
             printf("Ce Bateau n'est pas un SousMarin");
             Sleep(2500);
             textbackground(0);
             gotoxy(41,12);
             printf("                                      ");
             textcolor(15);
             gotoxy(42,15);
          }
          else
          if(!tab->getListe(i)->getHorizontal()){
                                                
             textbackground(14);
             textcolor(1); 
             gotoxy(41,12);printf("                                      ");
             gotoxy(45,12);
             printf("Ce SousMarin est deja en surface");
             Sleep(2500);
             textbackground(0);
             gotoxy(42,12);
             gotoxy(41,12);printf("                                      ");
             textcolor(15);
             gotoxy(42,15);          
          }
          else
          {  
             control=1;
             tab->getListe(i)->setHorizontal(false);
             display();
             gotoxy(41,12);printf("                                      ");
             
             gotoxy(41,13);
             textbackground(2);
             textcolor(15);
             
             printf("Ce SousMarin est Maintenant en surface");
             textbackground(0);
             textcolor(15);
             gotoxy(42,15);
             printf("5: menu principal");
             gotoxy(60,15);
             cin>>exit;

             system("cls");
                                
          }
          }
        }
    }
    while(control==0 && strcmp(nom,"s")!=0);

     

}






