// inventory.h

#ifndef INVENTORYBOT_H
#define INVENTORYBOT_H

#include "player.h" // Sertakan header Player
#include "weapon.h" // Sertakan header Weapon

class Inventory {
public:
    Inventory(Player* player);
    void Battle(Inventory* opponentInventory);
    bool IsDefeated() const;
    void DecreaseHealth(int amount);
    // Fungsi-fungsi lain yang mungkin Anda butuhkan dalam inventaris

private:
    Player* player;
    Weapon* weapon; // Senjata yang dimiliki
};

#endif // INVENTORY_H
