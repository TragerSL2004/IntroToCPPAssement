#pragma once
#include "Character.h"

class ProjectileSpawner;

class Partner :
    public Character
{
private:
    ProjectileSpawner* m_partnerSpawner;
    Character* m_owner;
};

