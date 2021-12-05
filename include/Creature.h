#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>

using namespace std;
class Creature
{
    public:

        string firstname;
        string lastname;
        string height;
        string weight;
        string date;
        Creature();
        virtual ~Creature();
        Creature(string firstname,string lastname,string height, string weight, string date);

        Creature(string firstname, string lastName,string height, string weight, string date,string email, string adress);

        string getFirstname();




    protected:

    private:
};

#endif // CREATURE_H
