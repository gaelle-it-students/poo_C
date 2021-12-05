#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <Creature.h>

using namespace std;



class Person : public Creature
{
    public:

        string email;
        string adress;
        Person();
        virtual ~Person();
        Person(string email, string adress);
        Person(string email, string adress,string firstname,string lastname,string height,string weight,string date);




        string getEmail();
        string getAdress();

        void setFirstName(string firstname);

    protected:

    private:
};

#endif // PERSON_H
