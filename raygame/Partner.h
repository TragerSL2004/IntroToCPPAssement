#pragma once
#include "Character.h"

class ProjectileSpawner;

class Partner :
    public Character
{
public: 
    void SetOwner(Character* owner);

private:
    ProjectileSpawner* m_partnerSpawner;
    Character* m_parent;
};

