#include "ProjectileSpawner.h"
#include "Engine.h"
#include <iostream>

ProjectileSpawner::ProjectileSpawner(Actor* owner, float projectileSpeed)
{
	m_owner = owner;
	m_projectileSpeed = projectileSpeed;
}

void ProjectileSpawner::SpawnProjectile()
{
	Bullet* bullet = new Bullet("Images/bullet.png", m_owner, m_projectileSpeed, 100, m_owner->getTransform()->getForward());
	Engine::getCurrentScene()->addActor(bullet);

	std::cout << bullet->getTransform()->getLocalPosition().x << ", ";
	std::cout << bullet->getTransform()->getLocalPosition().y << std::endl;
	
}

