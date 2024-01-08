#include "Character.h"
#include "raylib.h"
#include "Transform2D.h"

Character::Character()
{
	m_health = 0;
}

Character::Character(float health, MovementComponent* characterMove)
{
	m_health = health;
}
