#ifndef WARRIOR_H
#define WARRIOR_H
#include "wezen.h"

namespace ruben{
class warrior : public wezen //4
{
private:
    int genezen;
    int aantalHeals;
public:
    warrior(std::string name, int health, int attackMax, int blockMax, int genezen, int aantalHeals);
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
