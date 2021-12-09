#include "boss.h"

namespace ruben{
boss::boss(std::string name, int health, int attackMax, int blockMax) : wezen(name, health, attackMax, 1)
{

}

//Functie die bepaalt hoeveel damage er gedaan wordt bij een aanval
int boss::attack()
{
    return std::rand() % this->getAttackMax(); //44
}

boss::boss() : wezen("boss",10,10,10){};

boss::~boss(){};
};
