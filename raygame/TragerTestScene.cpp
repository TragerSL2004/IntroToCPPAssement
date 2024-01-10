#include "TragerTestScene.h"
#include "Character.h"
#include "Enemy.h"
#include "Partner.h"
#include <iostream>
#include "Transform2D.h"
#include "Movement.h"
#include "Player.h"
#include "SpriteComponent.h"

using namespace std;

void TragerTestScene::start()
{
	Enemy* enemy = new Enemy();
	MovementComponent* enemyMove = (MovementComponent*)enemy->addComponent(new MovementComponent(50, enemy));
	enemyMove->setVelocity({ 50, 50 });

	MathLibrary::Vector2 enemyScale = MathLibrary::Vector2(10, 10);

	enemy->getTransform()->setScale(enemyScale);
	addActor(enemy);

	Partner* partner = new Partner();

	MathLibrary::Vector2 partnerScale = MathLibrary::Vector2(15, 15);
	partner->getTransform()->setScale(partnerScale);
	partner->addComponent(new SpriteComponent(partner, "Images/WaterPartnerSpriteSheet.png"));
	addActor(partner);

	Player* test = new Player(50, nullptr, 100);

	test->addComponent(new SpriteComponent(test, "Images/sylas.png"));
	test->getTransform()->setScale({ 20, 20 });
	
	MovementComponent* testMove = (MovementComponent*)test->addComponent(new MovementComponent(50, test));

	addActor(test);
	test->getTransform()->addChild(partner->getTransform());
}

