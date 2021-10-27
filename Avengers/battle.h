#ifndef BATTLE_H
#define BATTLE_H
#include "warrior.h"
#include "boss.h"
#include "keuzes.h"


class battle
{
public:
    //Deze functie start het gevecht tussen de speler en de boss
    static void startFight(warrior& warrior1, boss& warrior2)
    {
        std::string input;
        do
        {
            for(;;)
            {
                input = actie();
                if(input == "a")
                {
                    //Game over als iemand dood is
                    if(battle::getAttackResult(warrior1, warrior2))
                    {
                        printf("Game Over\n");
                        break;
                    }
                    break;
                }
                //checken of de speler nog genoeg heals heeft bij juiste input
                else if(input == "g" && warrior1.getAantalHeals() > 0)
                {
                    warrior1.setHealth(warrior1.getHealth(), warrior1.heal());
                    warrior1.setAantalHeals(1);
                    printf("U heeft nog %d heals over, en uw health is %d.\n", warrior1.getAantalHeals(), warrior1.getHealth());
                    break;
                }
                else if(input == "skip")
                {
                    warrior2.setHealth(0);
                }
                else
                {
                    printf("Kan actie niet vinden, probeer opnieuw. ");
                }
            }
        }while(warrior1.getHealth() > 0 && warrior2.getHealth() > 0);
    }

    //Functie om resultaat te krijgen van de aanval van de speler en boss
    static int getAttackResult(warrior& warriorA, boss& warriorB)
    {
        //speler die baas aanvalt
        int warriorADamage = warriorA.attack();
        int damage2warriorB = (warriorADamage);
        damage2warriorB = (damage2warriorB <= 0)? 0:damage2warriorB;
        warriorB.setHealth(warriorB.getHealth() - damage2warriorB);
        printf("%s doet %d damage aan %s\n", warriorA.getName().c_str(), damage2warriorB, warriorB.getName().c_str());
        if(warriorB.getHealth() < 0)
        {
            printf("%s heeft nu nog 0 hp\n", warriorB.getName().c_str());
        }else
        {
            printf("%s heeft nu nog %d hp\n", warriorB.getName().c_str(), warriorB.getHealth());
        }
        if(warriorB.getHealth() <= 0)
        {
            printf("%s is dood, %s is gewonnen!\n", warriorB.getName().c_str(), warriorA.getName().c_str());
            return 1;
        }

        //baas die speler aanvalt
        int warriorBDamage = warriorB.attack();
        int warriorADefense = warriorA.block();
        int damage2warriorA = (warriorBDamage - warriorADefense);
        damage2warriorA = (damage2warriorA <= 0)? 0:damage2warriorA;
        warriorA.setHealth(warriorA.getHealth() - damage2warriorA);
        printf("%s doet %d damage aan %s\n", warriorB.getName().c_str(), damage2warriorA, warriorA.getName().c_str());
        if(warriorA.getHealth() < 0)
        {
            printf("%s heeft nu nog 0 hp\n", warriorA.getName().c_str());
        }else
        {
            printf("%s heeft nu nog %d hp\n", warriorA.getName().c_str(), warriorA.getHealth());
        }
        if(warriorA.getHealth() <= 0)
        {
            printf("%s is dood, %s is gewonnen!\n", warriorA.getName().c_str(), warriorB.getName().c_str());
            return 1;
        }
        return 0;
    }
};

#endif // BATTLE_H
