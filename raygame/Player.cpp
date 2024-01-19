#include "raylib.h"
#include "Player.h"
#include <iostream>



Player::Player(float health, MovementComponent* MoveComponent, float movementSpeed, float x, float y, const char* name):Character(health, MoveComponent, x, y, name)
{
	m_moveSpeed = movementSpeed;
	m_spawner = new ProjectileSpawner(this, 50);
	m_name = name;
}

void Player::update(float deltaTime)
{
	Character::update(deltaTime);


	MovementComponent* moveComponent = (MovementComponent*)getComponent("MovementComponent");

	MathLibrary::Vector2 velocity = moveComponent->getVelocity();
	MathLibrary::Vector2 direction = MathLibrary::Vector2(0, 0);
	


	if (IsKeyDown(KEY_W))
	{
		direction = direction + MathLibrary::Vector2 (0,-1);
		
	}
	if (IsKeyDown(KEY_A))
	{
		direction = direction + MathLibrary::Vector2 (-1, 0);
		
	}
	if (IsKeyDown(KEY_S))
	{
		direction = direction + MathLibrary::Vector2 (0,1);
	
	}

	if (IsKeyDown(KEY_D))
	{
		direction = direction + MathLibrary::Vector2 (1,0);
	}
	
	if (IsKeyDown(KEY_Q))
	{
		getTransform()->rotate(1*deltaTime);
	}
	if (IsKeyDown(KEY_E))
	{
		getTransform()->rotate(-1 * deltaTime);
	}

	if (IsKeyPressed(KEY_T))
	{
		getTransform()->scale({ 1.5f, 1.5f });
	}
	if (IsKeyPressed(KEY_Y))
	{
		getTransform()->scale({ -0.5f, -0.5f });
	}

	if (IsKeyPressed(KEY_SPACE))
	{
		m_spawner->SpawnProjectile();
	}
	
	if (IsKeyPressed(KEY_BACKSPACE))
	{
		m_spawner->SpawnProjectile2();
	}

	if (IsKeyPressed(KEY_NINE))
	{
		m_spawner->SpawnProjectile3();
	}




	velocity = direction.getNormalized() * m_moveSpeed;
	moveComponent->setVelocity(velocity);

	
}

