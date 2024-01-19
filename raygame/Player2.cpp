#include "raylib.h"
#include "Player2.h"
#include <iostream>
#include "Transform2D.h"

Player2::Player2(float health, MovementComponent* MoveComponent, float movementSpeed, float x, float y, const char* name): Character(health, MoveComponent, x, y, name)
{
	m_moveSpeed = movementSpeed;
	m_spawner = new ProjectileSpawner(this, 50);
	m_name = name;
}

void Player2::update(float deltaTime)
{
	Character::update(deltaTime);


	MovementComponent* moveComponent = (MovementComponent*)getComponent("MovementComponent");

	MathLibrary::Vector2 velocity = moveComponent->getVelocity();
	MathLibrary::Vector2 direction = MathLibrary::Vector2(0, 0);



	if (IsKeyDown(KEY_UP))
	{
		direction = direction + MathLibrary::Vector2(0, -1);

	}
	if (IsKeyDown(KEY_LEFT))
	{
		direction = direction + MathLibrary::Vector2(-1, 0);

	}
	if (IsKeyDown(KEY_DOWN))
	{
		direction = direction + MathLibrary::Vector2(0, 1);

	}

	if (IsKeyDown(KEY_RIGHT))
	{
		direction = direction + MathLibrary::Vector2(1, 0);
	}

	if (IsKeyDown(KEY_HOME))
	{
		getTransform()->rotate(1 * deltaTime);
	}
	if (IsKeyDown(KEY_INSERT))
	{
		getTransform()->rotate(-1 * deltaTime);
	}

	if (IsKeyPressed(KEY_DELETE))
	{
		getTransform()->scale({ 1.5f, 1.5f });
	}
	if (IsKeyPressed(KEY_END))
	{
		getTransform()->scale({ -0.5f, -0.5f });
	}

	if (IsKeyPressed(KEY_BACKSLASH))
	{
		m_spawner->SpawnProjectile();
	}

	if (IsKeyPressed(KEY_PAGE_UP))
	{
		m_spawner->SpawnProjectile2();
	}

	if (IsKeyPressed(KEY_PAGE_DOWN))
	{
		m_spawner->SpawnProjectile3();
	}




	velocity = direction.getNormalized() * m_moveSpeed;
	moveComponent->setVelocity(velocity);


}
