#ifndef BOSS_H
#define BOSS_H
#include <string>
#include "wezen.h"


class boss : public wezen
{
private:
    int blockwaarde = 1; //3?, 17, 18
public:
    int blockMax = blockwaarde; //3?, 16
    boss(std::string name, int health, int attackMax, int blockMax);
    int attack();
    int block(){return blockwaarde;}
    boss(); //11
    ~boss(); //14
};

#endif // BOSS_H
