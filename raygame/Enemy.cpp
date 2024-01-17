#include "Enemy.h"
#include "Transform2D.h"

Enemy::Enemy()
{
	m_health = 0;
	m_target = nullptr;
}

Enemy::Enemy(float health, MovementComponent* characterMove, Character* target, float x, float y)
{
	m_health = health;
	m_target = target;
	m_transform = new Transform2D(this);
	m_transform->setLocalPosition({ x,y });
}
