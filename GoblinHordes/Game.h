#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"
#include "GoblinFactory.h"

class Game
{
public:
    Game();
    ~Game();

    void GameLoop();
    void PopulateHumanDefenders(const int ammount);
    void PopulateHorde(const int ammount);

private:
    char playAgain = 'Y';
    std::vector<Entity*> m_horde;
    std::vector<Entity*> m_human;
    GoblinFactory* m_goblinFactory; 

    void AddToHorde(Entity* unit);
    void RemoveFromHorde(Entity* unit);

    void AddToHumanPopulous(const Entity* unit);
    void RemoveFromHumanPopulous(const Entity* unit);
};

