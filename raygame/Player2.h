#pragma once
#include "Character.h"
#include "ProjectileSpawner.h"
#include "Movement.h"


class Player2 :
	public Character

{
public:

	void update(float deltaTime) override;

	Player2(float health, MovementComponent* MoveComponent, float movementSpeed);






private:

	float m_moveSpeed;
	ProjectileSpawner* m_spawner;
};




