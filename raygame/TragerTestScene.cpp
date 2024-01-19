#include "TragerTestScene.h"
#include "Character.h"
#include "Enemy.h"
#include "Partner.h"
#include <iostream>
#include "Transform2D.h"
#include "Movement.h"
#include "Player.h"
#include "Player2.h"
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

	Player* player = new Player(50, nullptr, 100, 0, 0, "player1");

	player->addComponent(new SpriteComponent(player, "Images/sylas.png"));
	player->getTransform()->setScale({ 20, 20 });
	
	MovementComponent* playerMove = (MovementComponent*)player->addComponent(new MovementComponent(50, player));
	CircleCollider* playerCollider = new CircleCollider(50, player);
	player->setCollider(playerCollider);
	addActor(player);


	Partner* partner2 = new Partner();

	MathLibrary::Vector2 partnerScale2 = MathLibrary::Vector2(2, 2);
	partner2->getTransform()->setScale(partnerScale2);
	partner2->addComponent(new SpriteComponent(partner2, "Images/FOREVER.png"));


	addActor(partner2);

	player->getTransform()->addChild(partner->getTransform());



	
	
	
	Player2* player2 = new Player2(50, nullptr, 100, 0, 0, "player2");

	player2->addComponent(new SpriteComponent(player2, "Images/toot.png"));
	player2->getTransform()->setScale({ 20, 20 });

	MovementComponent* playerMove2 = (MovementComponent*)player2->addComponent(new MovementComponent(50, player2));
	CircleCollider* playerCollider2 = new CircleCollider(30, partner2);
	player2->setCollider(playerCollider2);
	addActor(player2);
	player2->getTransform()->addChild(partner2->getTransform());





	Enemy* enemy1 = new Enemy();
	MovementComponent* enemyMove = (MovementComponent*)enemy1->addComponent(new MovementComponent(50, enemy1));
	enemyMove->setVelocity({ -50, -50 });
	enemy1->getTransform()->setLocalPosition({500, 500});

	MathLibrary::Vector2 enemyScale = MathLibrary::Vector2(25, 25);

	enemy1->getTransform()->setScale(enemyScale);
	enemy1->addComponent(new SpriteComponent(enemy1, "Images/enemy.png"));
	CircleCollider* enemy1Collider = new CircleCollider(30, enemy1);
	enemy1->setCollider(enemy1Collider);

	addActor(enemy1);

	Enemy* enemy2 = new Enemy();
	MovementComponent* enemy2Move = (MovementComponent*)enemy2->addComponent(new MovementComponent(50, enemy2));
	enemy2Move->setVelocity({ -50, 0 });
	enemy2->getTransform()->setLocalPosition({ 700, 10 });

	enemy2->getTransform()->setScale(enemyScale);
	enemy2->addComponent(new SpriteComponent(enemy2, "Images/enemy.png"));
	CircleCollider* enemy2Collider = new CircleCollider(30, enemy2);
	enemy2->setCollider(enemy2Collider);

	addActor(enemy2);

	Enemy* enemy3 = new Enemy();
	MovementComponent* enemy3Move = (MovementComponent*)enemy3->addComponent(new MovementComponent(50, enemy3));
	enemy3Move->setVelocity({ 0, -50 });
	enemy3->getTransform()->setLocalPosition({ 10, 800 });

	enemy3->getTransform()->setScale(enemyScale);
	enemy3->addComponent(new SpriteComponent(enemy3, "Images/enemy.png"));
	CircleCollider* enemy3Collider = new CircleCollider(30, enemy3);
	enemy3->setCollider(enemy3Collider);

	addActor(enemy3);
}

