#include "Entity.h"



Entity::Entity()
{
}


Entity::~Entity()
{
}

void Entity::DealDamage(int damage)
{
    m_health -= damage;
}

const int Entity::GetDamage()
{
    return m_damage;
}

void Entity::AwardExperience(int exp)
{
}

const int Entity::GetStrengthRank()
{
    return m_strengthRank;
}
