#ifndef WEZEN_H
#define WEZEN_H
#include <string>
//8
namespace ruben{
class wezen
{
private:
    short signed int attackMax;
    std::string name;
    short signed int health;
protected:
    short signed int blockMax;
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
}
inline int ruben::wezen::getHealth()
{
    return this->health;
}

#endif // WEZEN_H
