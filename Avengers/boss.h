#ifndef BOSS_H
#define BOSS_H
#include <string>
#include "wezen.h"

namespace ruben{
class boss : public wezen
{
public:
    boss(std::string name, int health, int attackMax, int blockMax);
    int attack();
    int block(){return blockMax;}
    boss(); //11
    ~boss(); //14
};
}
#endif // BOSS_H
