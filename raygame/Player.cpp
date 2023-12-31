#include "raylib.h"
#include "Player.h"
#include <iostream>
#include "Transform2D.h"

Player::Player(float health, MovementComponent* MoveComponent, float movementspeed)
{
	m_moveSpeed = movementspeed;
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

	velocity = direction.getNormalized() * m_moveSpeed;
	moveComponent->setVelocity(velocity);

	std::cout << velocity.x << ", ";
	std::cout << velocity.y << std::endl;
}

