#pragma once
#include "Character.h"

class ProjectileSpawner;

class Partner :
    public Character
{
public: 

private:
    ProjectileSpawner* m_partnerSpawner;
    Character* m_parent;
};

