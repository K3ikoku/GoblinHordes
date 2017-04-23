#include "Game.h"



Game::Game():
    m_goblinFactory(new GoblinFactory())
{
;
}


Game::~Game()
{
}

void Game::GameLoop()
{

    while (playAgain == 'Y')
    {




        std::cout << "Do you want to play again? Y/N \n";
        std::cin >> playAgain;

        if (playAgain == 'Y')
        {
            std::cout << "\n Perfekt! Let's play again! \n";
        }

        else
        {
            std::cout << "\n To bad let's play again another time! \n";
        }
    }
}

void Game::PopulateHumanDefenders(const int ammount)
{
    //TODO: Create function for randomly create human groups
    //if (ammount > 0)
    //{
    //    for (int i = 0; i < ammount; i++)
    //    {

    //    }
    //}
}

void Game::PopulateHorde(const int ammount)
{
    if (ammount > 0)
    {
        for (int i = 0; i < ammount; i++)
        {
            AddToHorde(m_goblinFactory->CreateUnit('g'));
        }
    }
}

void Game::AddToHorde(Entity * unit)
{
    m_horde.push_back(unit);
}

void Game::RemoveFromHorde(Entity * unit)
{
    //TODO: Implement function for destroying goblin from the hode
}

void Game::AddToHumanPopulous(const Entity * unit)
{
}

void Game::RemoveFromHumanPopulous(const Entity * unit)
{
}
