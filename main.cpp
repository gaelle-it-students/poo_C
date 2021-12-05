#include <iostream>
#include <Person.h>
#include <Creature.h>
#include <Cat.h>
#include <iostream>
#include <stdio.h>
#include <String>

#include <new>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
    //char str[80];
 printf("Creation de CREATURE qui contient ses parametres d'entree (Classe Parente "")\n" );
 Creature C1("elodie","ALAVIN","155 cm", "45 kg","08/10/1984");
 Creature Elodie(C1);
  printf( "Affichage des attributs de la classe parente""\n" );
  cout<<"Firstname :"<< C1.firstname<<endl;
  cout<<"Lastname :"<< C1.lastname<<endl;
  cout<<"Height :"<< C1.height<<endl;
  cout<<"Weight :"<< C1.weight<<endl;
  cout<<"Date :"<< C1.date<<endl;
printf("____________________________________________________________________________________________________\n" );
printf("Creation de PERSONNE qui contient ses parametres d'entree (Classe Enfant "")\n" );
Person P1("killian@gmail.com","8 rue Paris Saint Germain");
  printf( "Affichage des attributs de la classe enfant""\n" );
  printf( "Appel de methodes ""\n" );
  P1.getEmail();
  cout<<"Email :"<< P1.email<<endl;
  cout<<"Adress :"<< P1.adress<<endl;


  printf("____________________________________________________________________________________________________\n" );


("Création de PERSONNE P2 avec héritage des attributs de la classe parente CREATURE " );
Person P2("Gaelle.payet@gmail.com","8 rue des fleurs","Gaelle","PAYET","157 cm","60 kg","01/10/1984");
printf("Creation de PERSONNE qui herite des parametres de la classe parente (Classe Enfant "")\n" );

 cout<<"Email :"<< P2.email<<endl;
 cout<<"Adress :"<< P2.adress<<endl;
 cout<<"Firstname :"<< P2.firstname<<endl;
 cout<<"Lastname :"<< P2.lastname<<endl;
 cout<<"height :"<< P2.height<<endl;
 cout<<"weight :"<< P2.weight<<endl;
 cout<<"date :"<< P2.date<<endl;



printf("____________________________________________________________________________________________________\n" );

printf("Creation de CHAT qui contient ses parametres d'entree (Classe Enfant "")\n" );


Cat F1 ("persan");
  printf( "Affichage des attributs de la classe enfant""\n" );
  //cout << "Creating a Person : \n";
  //cout << P1.getEmail();
  cout<<"species :"<< F1.species<<endl;
  //cout<<"Adress :"<< P1.adress<<endl;

printf("____________________________________________________________________________________________________\n" );
Cat F2("Felix","LEMATOU","20 cm","5 kg","02/01/2001","Siamois");
printf("Creation de CHAT qui herite des parametres de la classe parente (Classe Enfant "")\n" );

 cout<<"Firstname :"<< F2.firstname<<endl;
 cout<<"Lastname :"<< F2.lastname<<endl;
 cout<<"Firstname :"<< F2.firstname<<endl;
 cout<<"height :"<< F2.height<<endl;
 cout<<"weight :"<< P2.weight<<endl;
 cout<<"date :"<< F2.date<<endl;
 cout<<"species :"<< F2.species<<endl;



//Person P1("killian","MBAPPE","180 cm","80 kg","01/01/1998","killian@gmail.com","8 rue Paris Saint Germain");
//Creature C2("fdkfm","ddd","fgfg","fdf","cllc");
//Creature C();
//Creature C2 ("ddd","dd","ff","ff","ff");


//P2.getfirstname();



  //  scanf ("%s",str);
  //  cout << "name scan:"<<str<< endl;

//Creature C2();
//Person P1("fs","ff","ffùelfze");
//P1.getfirstname();

 // Creature C1();
 // printf("Affichage des attributs de la classe parente ");

    //cout<<"firstname :"<< C1.firstName<<endl;
   // cout<<"lastname :"<< C1.lastName<<endl;
   // cout<<"height :"<< C1.height<<endl;
   // cout<<"weight :"<< C1.weight<<endl;



   // printf ("Enter your family name:");
    //scanf ("%s", str);
    //cout << "name scan:"<<str<< endl;


   // Person P1 ("gaga@mail.com","12 rue dupont");
   // P1.setFirstName("Gaga c'est mon nouveau nom");
   //  cout<<"Creature  lastname :"<< P1.firstName<<endl;



  //  Cat *Creat4 = new Cat("Persan");
  //  cout<<"species :"<< Creat4->species<<endl;

  //  Cat Creat5 ("5kg");
   // Creat5.setweight(" Le poids du chat est 5kg");
    // cout<<"Creature  weightcat :"<< Creat5.weight<<endl;
    //return 0;
}
