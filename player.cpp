#include "Player.h"

void Player::setName(std::string name) {
    playerName = name;
}

std::string Player::getName() {
    return playerName;
}

void Player::addExperience(int exp) {
    experience += exp;
}

int Player::getExperience() {
    return experience;
}