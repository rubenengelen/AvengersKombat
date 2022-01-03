#include "warrior.h"

namespace ruben{
//constructor
warrior::warrior(std::string name, int health, int attackMax, int blockMax, short signed int genezen, short signed int aantalHeals) : wezen(name, health, attackMax, blockMax), genezen(genezen)
{
    this->aantalHeals = aantalHeals;
}

//Functie die bepaalt hoeveel damage de speler blockt
int warrior::block()
{
    return std::rand() % this->getBlockMax();
}

//Functie die bepaalt hoeveel damage de speler doet
int warrior::attack()
{
    return std::rand() % this->getAttackMax();
}

//Functie die teruggeeft hoeveel heals de speler nog heeft
int warrior::getAantalHeals()
{
    return this->aantalHeals;
}

//update het aantalheals na gebruik
void warrior::setAantalHeals(int a)
{
    this->aantalHeals = this->aantalHeals - a;
}

//geeft het aantal healthpunten terug die bijopgeteld moeten worden
int warrior::heal()
{
    return this->genezen;
}

//constructor
warrior::warrior() : wezen("warrior",10,10,10){};

//destructor
warrior::~warrior(){};
};
