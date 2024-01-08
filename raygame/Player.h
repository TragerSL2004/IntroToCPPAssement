#pragma once
#include "Character.h"
#include "Movement.h"


class Player :
	public Character
	
{
public:
		
	void update(float deltaTime) override;

	Player(float health, MovementComponent* MoveComponent, float movementSpeed);






private:
	float m_moveSpeed;
};




