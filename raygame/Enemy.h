#pragma once
#include "Character.h"

class ProjectileSpawner;

class Enemy :
    public Character
{
public:
    Enemy();

    /// <param name="target">The character that this enemy will chase after.</param>
    Enemy(float health, MovementComponent* characterMove, Character* target, float x, float y);

private:
    float m_health;
    Transform2D* m_transform;
    Character* m_target;
};

