#include "Enemy.h"
#include "Player.h"
#include <string>

Enemy::Enemy() {

}
Enemy::~Enemy() {

}
void Enemy::setName(string name) {
	Name = name;
}
string Enemy::getName() {
	return Name;
}
void Enemy::setHealth(int health) {
	Health = health;
}
int Enemy::getHealth() {
	return Health;
}
void Enemy::setAttack(int attack) {
	Attack = attack;
}
int Enemy::getAttack() {
	return Attack;
}
void Enemy::enemy_attack(Player* player) {

}
void status() {

}