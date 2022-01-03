#ifndef GAME_H
#define GAME_H
#include "battle.h"
#include <fstream>

namespace ruben{
class game
{
public:
    game(int aantalGames, char naam[]){
        ofstream gamelog;
        gamelog.open ("../gamelog.txt", iostream::app);
        gamelog <<"Game van " << naam << ".\n";
        gamelog.close();
        //bijvoorbeeld voor hoevel geld er aan spelletjes is ingeworden in de machine
        while(aantalGames > 0)
        {
            std::string naam;
            //switch die de gekozen held aanmaakt en gevecht start
            cout << "Welkom " << naam << "!" << endl;
            switch(strijder())
            {
            case 1:
            {
                warrior player("Thor", 100, 10, 15, 20, 3); //12
                printf("U heeft %s gekozen!\n", player.getName().c_str());
                bosskeuze(player);
            }
                break;
            case 2:
            {
                warrior player("Hulk" , 135, 12, 25, 27, 5); //12
                printf("U heeft %s gekozen!\n", player.getName().c_str());
                bosskeuze(player);
            }
                break;
            case 3:
            {
                warrior player("Iron Man", 125, 15, 13, 24, 2); //12
                printf("U heeft %s gekozen!\n", player.getName().c_str());
                bosskeuze(player);
            }
                break;
            }
            aantalGames--;
        }
        //cool extra feature
        system("..\\gamelog.txt");
        system("del ..\\gamelog.txt");
    }
    std::string bosskeuze(ruben::warrior& speler){
        switch(baas())
        {
        case 1:
        {
            boss baas("Loki", 150, 10, 1); //12
            printf("Gevecht tussen %s en %s\n", speler.getName().c_str(), baas.getName().c_str());
            battle::startFight(speler, baas); //13
            return baas.getName();
            break;
        }
        case 2:
        {
            boss baas("Thanos", 190, 14, 1); //12
            printf("Gevecht tussen %s en %s\n", speler.getName().c_str(), baas.getName().c_str());
            battle::startFight(speler, baas); //13
            return baas.getName();
            break;
        }
        case 3:
            boss baas("Magneto", 120, 8, 1); //12
            printf("Gevecht tussen %s en %s\n", speler.getName().c_str(), baas.getName().c_str());
            battle::startFight(speler, baas); //13
            return baas.getName();
            break;
        }
        return "";
    }
};
}
#endif // GAME_H
