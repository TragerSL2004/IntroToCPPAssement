#include "Bullets.h"
#include <iostream>



Bullet::Bullet(const char* sprite, Actor* owner, float speed, float size, MathLibrary::Vector2 moveDirection)
{
	m_moveDirection = moveDirection;
	m_spritePath = sprite;
	m_owner = owner;
	m_speed = speed;
	m_size = size;
	m_sprite = new SpriteComponent(this, sprite);
	addComponent(m_sprite);
	getTransform()->setScale({50,50});
	getTransform()->setLocalPosition(m_owner->getTransform()->getLocalPosition());
	m_move = new MovementComponent(5, this);
	addComponent(m_move);
}

void Bullet::update(float deltaTime)
{
  m_move->setVelocity(m_moveDirection.getNormalized() * m_speed);
  
  Actor::update(deltaTime);
}




