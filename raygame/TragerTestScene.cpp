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

	MathLibrary::Vector2 enemyScale = MathLibrary::Vector2(10, 10);

	enemy->getTransform()->setScale(enemyScale);
	addActor(enemy);

	Partner* partner = new Partner();

	MathLibrary::Vector2 scale = MathLibrary::Vector2(75, 25);
	partner->getTransform()->setScale(scale);
	addActor(partner);
	enemy->getTransform()->addChild(partner->getTransform());
}
