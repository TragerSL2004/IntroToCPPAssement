#include "SampleScene.h"
#include "SpriteComponent.h"
#include "Transform2D.h"
#include "Movement.h"

void SampleScene::start()
{
	Actor* test = new Actor(50, 50, "Test");
	test->addComponent(new SpriteComponent(test, "Images/player.png"));
	test->getTransform()->setScale({ 50, 50 });
	Movement* testMove = (Movement*)test->addComponent(new Movement(50, test));
	testMove->setVelocity({ 50 , 0 });

	addActor(test);
}
