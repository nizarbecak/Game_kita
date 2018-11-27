#include "Player.h"

Player::Player() {

}
Player::~Player() {

}
void Player::setName(string name) {
	Name = name;
}
string Player::getName() {
	return Name;
}
void Player::setHealth(int health) {
	Health = health;
}
int Player::getHealth() {
	return Health;
}
void Player::setAttack(int attack) {
	Attack = attack;
}
int Player::getAttack() {
	return Attack;
}
void Player::player_attack(Enemy* enemy) {

}
void Player::status() {

}