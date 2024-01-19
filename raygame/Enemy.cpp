#include "Enemy.h"
#include "Transform2D.h"
#include "Movement.h"
Enemy::Enemy()
{
	m_health = 0;
	m_target = nullptr;
	m_transform = new Transform2D(this);
}

Enemy::Enemy(float health, MovementComponent* characterMove, Character* target, float x, float y, const char* name): Character( health,  characterMove, x, y,  name)
{
	m_health = health;
	m_target = target;
	m_transform = new Transform2D(this);
	m_transform->setLocalPosition({ x,y });
}
