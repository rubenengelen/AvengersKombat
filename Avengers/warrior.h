#ifndef WARRIOR_H
#define WARRIOR_H
#include "wezen.h"

namespace ruben{
class warrior : public wezen //4
{
private:
    short signed int genezen;
    short signed int aantalHeals;
public:
    warrior(std::string name, int health, int attackMax, int blockMax, short signed int genezen, short signed int aantalHeals);
    int heal();
    int getAantalHeals();
    void setAantalHeals(int a);
    int attack();
    int block();
    warrior(); //11
    ~warrior(); //14
};
};
#endif // WARRIOR_H
