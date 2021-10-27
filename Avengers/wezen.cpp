#include "wezen.h"

wezen::wezen(std::string name, int health, int attackMax, int blockMax)
{
    this->name = name;
    this->health = health;
    this->attackMax = attackMax;
    this->blockMax = blockMax;
}



void wezen::setHealth(int a, int b)
{
    this->health =  a + b;
}

void wezen::setHealth(int a)
{
    this->health = a;
}

std::string wezen::getName()
{
    return this->name;
}

int wezen::getAttackMax()
{
    return this->attackMax;
}

int wezen::getBlockMax()
{
   return this->blockMax;
}
