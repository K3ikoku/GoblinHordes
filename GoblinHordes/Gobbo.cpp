#include "Gobbo.h"



Gobbo::Gobbo()
{
}


Gobbo::~Gobbo()
{
}

void Gobbo::DealDamage(int damage)
{
    m_health -= damage;
}

int Gobbo::GetDamage()
{
    return m_damage;
}

void Gobbo::AwardExperience(int exp)
{
    m_experiencePoints += exp;
}

int Gobbo::GetStrengthRank()
{
    return m_strengthRank;
}