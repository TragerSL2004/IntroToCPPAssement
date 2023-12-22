#include "raylib.h"
#include "Transform2D.h"
#include "Movement.h"
#include "Actor.h"

MovementComponent::MovementComponent(float Speed, Actor* owner) : Component(owner, "MovementComponent")
{
	m_speed = Speed;
}

void MovementComponent::update(float deltaTime)
{
	MathLibrary::Vector2 position = getOwner()->getTransform()->getLocalPosition();
	position= position + getVelocity() * deltaTime;
	getOwner()->getTransform()->setLocalPosition(position);

}