#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <Creature.h>


using namespace std;

class Cat : public Creature
{
    public:

        string species;
        Cat();
        virtual ~Cat();
        Cat(string species);
        string getspecies();
        void setweight(string weightCat);
        Cat(string firstName,string lastname,string height, string weight, string date,string species);


    protected:

    private:
};

#endif




