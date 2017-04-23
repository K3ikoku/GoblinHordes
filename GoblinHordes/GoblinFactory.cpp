#include "GoblinFactory.h"



GoblinFactory::GoblinFactory()
{
}

Entity * GoblinFactory::CreateUnit(const char & unitType)
{
    m_newUnit = nullptr;

    switch (unitType)
    {	
    case 'g':
        m_newUnit = new Gobbo();
        break;

    //case 'p':
    //	m_newUnit = new Peasant();
    //	break;

    default:
        break;
    }
    return nullptr;
}

