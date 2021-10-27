#ifndef WEZEN_H
#define WEZEN_H
#include <string>
//8

class wezen
{
private:
    int attackMax;
    int blockMax;
    std::string name;
    int health;
public:
    inline int getHealth();
    std::string getName();
    void setHealth(int a, int b);
    void setHealth(int a);
    int getAttackMax();
    int getBlockMax();
    virtual int attack() = 0;
    virtual int block() = 0;
    wezen(std::string name, int health, int attackMax, int blockMax);
};

inline int wezen::getHealth()
{
    return this->health;
}

#endif // WEZEN_H
