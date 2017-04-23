#pragma once
#include "Entity.h"
class BaseGoblin :
    public Entity
{
public:
    BaseGoblin();
    ~BaseGoblin();

    void DealDamage(int damage) override;
    const int GetDamage() override;

    void AwardExperience(int exp) override;
    const int GetStrengthRank() override;

private:
    int m_experiencePoints;
    int m_health;
    int m_maxHealth;
    int m_damage;
    int m_strengthRank;
};

