#pragma once
#include "Character.h"

class ProjectileSpawner;

class Enemy :
    public Character
{
public:

private:
    ProjectileSpawner* m_spawner;
    Character* m_target;
};

