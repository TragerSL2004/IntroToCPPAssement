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
	Bullet* bullet = new Bullet("Images/drag.png", m_owner, m_projectileSpeed, 100, m_owner->getTransform()->getForward());
	Engine::getCurrentScene()->addActor(bullet);

	CircleCollider* bulletCollider = new CircleCollider(10, bullet);
	bullet->setCollider(bulletCollider);

	std::cout << bullet->getTransform()->getLocalPosition().x << ", ";
	std::cout << bullet->getTransform()->getLocalPosition().y << std::endl;
	
}

void ProjectileSpawner::SpawnProjectile2()
{
	Bullet* bullet = new Bullet("Images/yett.png", m_owner, m_projectileSpeed, 100, m_owner->getTransform()->getForward());
	Engine::getCurrentScene()->addActor(bullet);
}


void ProjectileSpawner::SpawnProjectile3()
{
	Bullet* bullet = new Bullet("Images/niinee.png", m_owner, m_projectileSpeed, 100, m_owner->getTransform()->getForward());
	Engine::getCurrentScene()->addActor(bullet);
}


