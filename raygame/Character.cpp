#include "Character.h"
#include "raylib.h"
#include "Transform2D.h"
#include "Engine.h"

Character::Character()
{
	m_health = 0;
}

Character::Character(float health, MovementComponent* characterMove)
{
	m_health = health;
}

void Character::onCollision(Actor* other)
{
	if (this != other)
		return;
	
	
}
