#include "BaseGoblin.h"



BaseGoblin::BaseGoblin()
{
}


BaseGoblin::~BaseGoblin()
{
}

void BaseGoblin::DealDamage(int damage)
{
    m_health -= m_damage;
}

const int BaseGoblin::GetDamage()
{
    return m_damage;
}

void BaseGoblin::AwardExperience(int exp)
{
    m_experiencePoints += exp;
}

const int BaseGoblin::GetStrengthRank()
{
    return m_strengthRank;
}
