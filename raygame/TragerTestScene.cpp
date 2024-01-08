#include "TragerTestScene.h"
#include "Character.h"
#include "Enemy.h"
#include "Partner.h"
#include <iostream>
#include "Transform2D.h"
#include "Movement.h"

using namespace std;

void TragerTestScene::start()
{
	Enemy* enemy = new Enemy();
	MovementComponent* enemyMove = (MovementComponent*)enemy->addComponent(new MovementComponent(50, enemy));;
	enemyMove->setVelocity({ 50, 50 });

	MathLibrary::Vector2 enemyScale = MathLibrary::Vector2(50, 50);

	enemy->getTransform()->setScale(enemyScale);
	addActor(enemy);

	Partner* partner = new Partner();

	MovementComponent* partnerMove = (MovementComponent*)partner->addComponent(new MovementComponent(50, partner));

	partnerMove->setVelocity({ 0, 50 });

	MathLibrary::Vector2 scale = MathLibrary::Vector2(50, 50);
	partner->getTransform()->setScale(scale);
	addActor(partner);
}
