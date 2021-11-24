#include "warrior.h"

//constructor
ruben::warrior::warrior(std::string name, int health, int attackMax, int blockMax, int genezen, int aantalHeals) : wezen(name, health, attackMax, blockMax), genezen(genezen)
{
    this->aantalHeals = aantalHeals;
}

//Functie die bepaalt hoeveel damage de speler blockt
int ruben::warrior::block()
{
    return std::rand() % this->getBlockMax();
}

//Functie die bepaalt hoeveel damage de speler doet
int ruben::warrior::attack()
{
    return std::rand() % this->getAttackMax();
}

//Functie die teruggeeft hoeveel heals de speler nog heeft
int ruben::warrior::getAantalHeals()
{
    return this->aantalHeals;
}

//update het aantalheals na gebruik
void ruben::warrior::setAantalHeals(int a)
{
    this->aantalHeals = this->aantalHeals - a;
}

//geeft het aantal healthpunten terug die bijopgeteld moeten worden
int ruben::warrior::heal()
{
    return this->genezen;
}

//constructor
ruben::warrior::warrior() : wezen("warrior",10,10,10){};

//destructor
ruben::warrior::~warrior(){};
