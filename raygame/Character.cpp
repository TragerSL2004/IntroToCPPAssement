#include "Character.h"
#include "Movement.h"

Character::Character()
{
	m_health = 0;
}

Character::Character(float health, MovementComponent* characterMove,float x, float y, const char* name): Actor(x,y,name)
{
	m_health = health;
	x = 0;
	y = 0;
	name = "";
}

void Character::onCollision(Actor* other)
{
	if (this != other)
		return;
	
	
}
