#include "SampleScene.h"
#include "SpriteComponent.h"
#include "Transform2D.h"
#include "Movement.h"
#include "Player.h"
#include "ProjectileSpawner.h"
void SampleScene::start()
{
	Player* test = new Player(50, nullptr, 100);
	test->addComponent(new SpriteComponent(test, "Images/player.png"));
	test->getTransform()->setScale({ 50, 50 });
	MovementComponent* testMove = (MovementComponent*)test->addComponent(new MovementComponent(50, test));
	test->addComponent(new ProjectileSpawner(test, 50));
	
	addActor(test);
}
