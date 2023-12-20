#pragma once
#include "Actor.h"

class Movement;

class Character :
    public Actor
{
public:
    Character();

    /// <param name="health">The amount of health a character has to determine when they will despawn</param>
    Character(float health, Movement* characterMove);

    float getHealth() { return m_health; }

    void draw() override;

private:
    float m_health;
};

