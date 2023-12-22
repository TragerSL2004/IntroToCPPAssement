#include "raylib.h"
#include "Player.h"
#include "Transform2D.h"

Player::Player(float health, MovementComponent* MoveComponent)
{
}

void Player::update(float deltaTime)
{
	Character::update(deltaTime);


	MovementComponent* moveComponent = (MovementComponent*)getComponent("MovementComponent");

	Vector2 velocity = moveComponent->getVelocity();


	if (IsKeyDown(KEY_W))
	{
		velocity = velocity + ({ 0, 100 });
	}

	if (IsKeyDown(KEY_A))
	{
		velocity = velocity + ({ -100, 0 });
	
	if (IsKeyDown(KEY_S))
	{
		velocity = velocity + ({ 100, 0 });
	}

	if (IsKeyDown(KEY_D))
	{
		velocity = velocity + ({ 0, -100 });
	}
	
	moveComponent->setVelocity({ 0, 0 });

}

