#pragma once
#include "Enemy.h"
#include <string>

using namespace std;

class Enemy;

class Player
{
public:
	Player();
	~Player();
	void setName(string name);
	string getName();
	void setHealth(int health);
	int getHealth();
	void setAttack(int attack);
	int getAttack();
	void player_attack(Enemy *enemy);
	void status();

	int Health;
	string Name;
	int Attack;
};