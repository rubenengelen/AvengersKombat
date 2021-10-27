#include "warrior.h"

warrior::warrior(std::string name, int health, int attackMax, int blockMax, int genezen, int aantalHeals) : wezen(name, health, attackMax, blockMax), genezen(genezen)
{
    this->aantalHeals = aantalHeals;
}

//Functie die bepaalt hoeveel damage de speler blockt
int warrior::block()
{
    return std::rand() % this->getBlockMax();
}

int warrior::attack()
{
    return std::rand() % this->getAttackMax();
}

int warrior::getAantalHeals()
{
    return this->aantalHeals;
}

void warrior::setAantalHeals(int a)
{
    this->aantalHeals = this->aantalHeals - a;
}

int warrior::heal()
{
    return this->genezen;
}

warrior::warrior() : wezen("warrior",10,10,10){};

warrior::~warrior(){};
