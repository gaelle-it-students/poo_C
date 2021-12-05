#include "Cat.h"



Cat::Cat(string species)
{
    this->species = species;
}


Cat::Cat(string firstname, string lastname,string height,string weight,string date,string species)
{
   this->firstname = firstname;
    this->lastname = lastname;
    this->height = height;
    this->weight = weight;
    this->date = date;
    this->species = species;
}


Cat::~Cat()
{
    //dtor
}

string Cat::getspecies(){
    return this->species;
}

void Cat::setweight(string weightCat)
{
    this->weight = weightCat;
}





