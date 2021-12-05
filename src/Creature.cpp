#include "Creature.h"
#include "Cat.h"

Creature::Creature()
{

}


Creature::Creature(string firstname,string lastname, string height, string weight,string date)
{
   this->firstname = firstname;
    this->lastname = lastname;
    this->height = height;
    this->weight = weight;
    this->date = date;
}



 Creature::Creature(string firstname, string lastName,string height, string weight, string date,string email, string adress)
 {
    this->firstname = firstname;
    this->lastname = lastname;
    this->height = height;
    this->weight = weight;
    this->date = date;
 }

Creature::~Creature()
{
   // dtror

}

string Creature::getFirstname(){
    return this->firstname;

}












