#pragma once
#include "Component.h"
#include <Vector2.h>
class Actor;

class MovementComponent :
	public Component
{
public:
	MovementComponent(float speed, Actor* owner);


	MathLibrary::Vector2 getVelocity() { return m_velocity; }

	void setVelocity(MathLibrary::Vector2 velocity) { m_velocity = velocity; }


	void update(float deltaTime) override;

private:
	float m_speed;
	MathLibrary::Vector2 m_velocity;



};
