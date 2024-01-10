#pragma once
#include "Bullets.h"
#include "CircleCollider.h"
#include "Scene.h"
#include "Component.h"
#include "Transform2D.h"
class ProjectileSpawner :
	public Component

{
public:

	ProjectileSpawner(Actor* owner, float projectileSpeed);

	void SpawnProjectile();






private:
	Actor* m_owner;
	float m_projectileSpeed;
};