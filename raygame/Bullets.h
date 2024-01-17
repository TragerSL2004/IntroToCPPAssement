#include "Actor.h"
#include "SpriteComponent.h"
#include "Movement.h"
#include "Transform2D.h"

#pragma once

class Bullet :
	public Actor
	
{
public:


	Bullet(const char* sprite, Actor* owner, float speed, float size, MathLibrary::Vector2 moveDirection);
	void update(float deltaTime) override;

	void onCollision(Actor* other);

private:
	const char* m_spritePath;
	Actor* m_owner;
	float m_speed;
	SpriteComponent* m_sprite;
	float m_size;
	MovementComponent* m_move;
	MathLibrary::Vector2 m_moveDirection;
	float m_despawnTime = 3.0f;
	float m_currentTime;
};