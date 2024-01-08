#include "ProjectileSpawner.h"


ProjectileSpawner::ProjectileSpawner(Actor owner, float projectileSpeed, Actor sprite)
{
	m_owner = owner;
	m_projectileSpeed = projectileSpeed;
	m_sprite = sprite;
}

void ProjectileSpawner::SpawnProjectile()
{
	Bullets* bullet = new Bullets(m_owner, m_projectileSpeed, m_sprite);

	CircleCollider* bulletCollider = new CircleCollider(10, bullet);

	bulletCollider
}

