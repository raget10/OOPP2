// inventory.cpp
#include "inventory.h"
#include "player.h"
#include "weapon.h"

Inventory::Inventory(Player* player) : player(player), weapon(nullptr) {}

void Inventory::SetWeapon(Weapon* weapon) {
    this->weapon = weapon;
}

void Inventory::Battle(Inventory* opponentInventory) {
    if (weapon) {
        weapon->Attack(this, opponentInventory);
    }
}

bool Inventory::IsDefeated() const {
    return player->IsDefeated();
}

void Inventory::DecreaseHealth(int amount) {
    player->DecreaseHealth(amount);
}
