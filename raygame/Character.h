#pragma once
#include "Actor.h"

class MovementComponent;

class Character :
    public Actor
{
public:
    Character();
    /// <param name="health">The amount of health a character has to determine when they will despawn</param>
    Character(float health, MovementComponent* characterMove, float x, float y, const char* name);

    float getHealth() { return m_health; }
    void onCollision(Actor* other) override;

private:
    float m_health;
};