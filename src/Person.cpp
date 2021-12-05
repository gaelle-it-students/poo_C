#include "Person.h"

Person::Person(string email,string adress)
{
    this->email = email;
    this->adress = adress;


}
Person::Person() {

}



Person::Person(string email,string adress,string firstname,string lastname,string height,string weight,string date)
{
  this->email = email;
  this->adress = adress;
  this->firstname = firstname;
  this->lastname = lastname;
  this->height = height;
  this->weight = weight;
  this->date = date;

}

Person::~Person()
{

}


string Person::getEmail()
{
    return this->email;
}

string Person::getAdress()
{
    return this->adress;
}




void Person::setFirstName(string firstname)
{
    this->firstname = firstname;
}


