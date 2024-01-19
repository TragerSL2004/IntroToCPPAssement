#include "TragerTestScene.h"
#include "Character.h"
#include "Enemy.h"
#include "Partner.h"
#include <iostream>
#include "Transform2D.h"
#include "Movement.h"
#include "Player.h"
#include "SpriteComponent.h"
#include "CircleCollider.h"

using namespace std;

void TragerTestScene::start()
{
	

	Partner* partner = new Partner();

	MathLibrary::Vector2 partnerScale = MathLibrary::Vector2(2, 2);
	partner->getTransform()->setScale(partnerScale);
	partner->addComponent(new SpriteComponent(partner, "Images/WaterPartnerSprite.png"));
	

	addActor(partner);

	Player* player = new Player(50, nullptr, 100);

	player->addComponent(new SpriteComponent(player, "Images/sylas.png"));
	player->getTransform()->setScale({ 20, 20 });
	
	MovementComponent* playerMove = (MovementComponent*)player->addComponent(new MovementComponent(50, player));
	CircleCollider* playerCollider = new CircleCollider(30, partner);
	player->setCollider(playerCollider);
	
	addActor(player);
	player->getTransform()->addChild(partner->getTransform());
	
	Enemy* enemy = new Enemy();
	MovementComponent* enemyMove = (MovementComponent*)enemy->addComponent(new MovementComponent(50, enemy));
	enemyMove->setVelocity({ -50, -50 });
	enemy->getTransform()->setLocalPosition({500, 500});

	MathLibrary::Vector2 enemyScale = MathLibrary::Vector2(25, 25);

	enemy->getTransform()->setScale(enemyScale);
	enemy->addComponent(new SpriteComponent(enemy, "Images/enemy.png"));
	CircleCollider* enemyCollider = new CircleCollider(30, enemy);
	enemy->setCollider(enemyCollider);

	addActor(enemy);
}

