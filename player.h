// player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "inventory.h"

class Player {
public:
    Player(const std::string& name);
    void SetMaxHealth(int maxHealth);
    void DisplayHealth() const;
    bool IsDefeated() const;
    int GetHealth() const;
    void SetOpponent(Player* opponent);
    void Attack();

    void DecreaseHealth(int amount);

private:
    std::string name;
    int maxHealth;
    int health;
    Player* opponent;
    Inventory* inventory;
};

#endif
