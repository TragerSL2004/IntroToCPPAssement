#include "Character.h"
#include "raylib.h"
#include "Transform2D.h"

Character::Character()
{
	m_health = 0;
}

Character::Character(float health, Movement* characterMove)
{
	m_health = health;
}

void Character::draw()
{
	MathLibrary::Vector2 position = getTransform()->getWorldPosition();
	float radius = getTransform()->getScale().x;

	DrawCircle(position.x, position.y, radius, WHITE);
}
