#include "TragerTestScene.h"
#include "Character.h"
#include "Enemy.h"
#include <iostream>
#include "Transform2D.h"
#include "Movement.h"

using namespace std;

void TragerTestScene::start()
{
	Enemy* enemy = new Enemy();
	MovementComponent* enemyMove = (MovementComponent*)enemy->addComponent(new MovementComponent(50, enemy));;
	enemyMove->setVelocity({ 50, 50 });

	MathLibrary::Vector2 scale = MathLibrary::Vector2(50, 50);

	enemy->getTransform()->setScale(scale);
	addActor(enemy);

	Character* test = new Character(50, nullptr);
	cout << test->getHealth();
}
