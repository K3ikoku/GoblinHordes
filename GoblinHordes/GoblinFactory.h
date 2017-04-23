#pragma once
#include <vector>	
#include "Entity.h"
#include "Gobbo.h"

class GoblinFactory
{
public:
    GoblinFactory();

    Entity* CreateUnit(const char& unitType);

private:
    Entity* m_newUnit;
};

