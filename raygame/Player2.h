#pragma once
#include "Character.h"
#include "ProjectileSpawner.h"
#include "Movement.h"


class Player2 :
	public Character

{
public:

	void update(float deltaTime) override;

	Player2(float health, MovementComponent* MoveComponent, float movementSpeed, float x, float y, const char* name);






private:
	float m_moveSpeed = 0;
	ProjectileSpawner* m_spawner;
};




