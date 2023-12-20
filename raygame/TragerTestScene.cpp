#include "TragerTestScene.h"
#include "Character.h"
#include <iostream>

using namespace std;

void TragerTestScene::start()
{
	Character* test = new Character(50, nullptr);
	cout << test->getHealth();
}
