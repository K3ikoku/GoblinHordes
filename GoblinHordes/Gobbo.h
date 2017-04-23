#pragma once
#include "BaseGoblin.h"
class Gobbo :
    public BaseGoblin
{
public:
    Gobbo();
    ~Gobbo();

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