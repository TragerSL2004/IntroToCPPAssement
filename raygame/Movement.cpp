#include "raylib.h"
#include "Transform2D.h"
#include "Movement.h"
#include "Actor.h"

Movement::Movement(float Speed, Actor* owner) : Component(owner, "Movement")
{
	m_speed = Speed;
}

void Movement::update(float deltaTime)
{
	MathLibrary::Vector2 position = getOwner()->getTransform()->getLocalPosition();
	position= position + getVelocity() * deltaTime;
	getOwner()->getTransform()->setLocalPosition(position);

}