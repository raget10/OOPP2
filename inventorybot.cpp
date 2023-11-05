// inventorybot.cpp
#include "inventorybot.h"

InventoryBot::InventoryBot(Player* player) : Inventory(player), weapon(nullptr) {}

void InventoryBot::SetWeapon(Weapon* newWeapon) {
    weapon = newWeapon;
}

void InventoryBot::Battle(Inventory* opponentInventory) {
    if (weapon) {
        weapon->Attack(this, opponentInventory);
    }
}

bool InventoryBot::IsDefeated() const {
    return player->IsDefeated();
}

void InventoryBot::DecreaseHealth(int amount) {
    player->DecreaseHealth(amount);
}
