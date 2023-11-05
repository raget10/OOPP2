// player.cpp
#include "player.h"
#include "inventory.h"
#include <iostream>

Player::Player(const std::string& playerName) : name(playerName), maxHealth(100), health(maxHealth), opponent(nullptr), inventory(nullptr) {
    inventory = new Inventory(this);
}

void Player::SetMaxHealth(int maxHealth) {
    this->maxHealth = maxHealth;
    health = maxHealth;
}

void Player::DisplayHealth() const {
    std::cout << name << "'s health: " << health << std::endl;
}

bool Player::IsDefeated() const {
    return health <= 0;
}

int Player::GetHealth() const {
    return health;
}

void Player::SetOpponent(Player* opponent) {
    this->opponent = opponent;
}

void Player::Attack() {
    if (opponent && !IsDefeated()) {
        inventory->Battle(opponent->inventory);
        DisplayHealth();
    }
}

void Player::DecreaseHealth(int amount) {
    health -= amount;
}
