#pragma once
class Entity
{
public:
    Entity();
    ~Entity();

    virtual void DealDamage(int damage);
    virtual const int GetDamage();
    
    virtual void AwardExperience(int exp);
    virtual const int GetStrengthRank();

private:
    int m_damage;
    int m_health;
    int m_maxHealth;
    int m_strengthRank;
};

