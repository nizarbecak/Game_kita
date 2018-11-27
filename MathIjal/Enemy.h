#pragma once
#include <string>
#include "Player.h"

using namespace std;

class Player;

class Enemy
{
public:
	Enemy();
	~Enemy();
	void setName(string name);
	string getName();
	void setHealth(int health);
	int getHealth();
	void setAttack(int attack);
	int getAttack();
	void enemy_attack(Player *player);
	void status();

	int Health;
	string Name;
	int Attack;
};

