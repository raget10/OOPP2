#ifndef INVENTORY_H
#define INVENTORY_H

class Player; // Forward declaration

class Inventory {
public:
    Inventory(Player* player);
    void SetWeapon(Weapon* weapon);
    void Battle(Inventory* opponentInventory);
    bool IsDefeated() const;
    void DecreaseHealth(int amount);

private:
    Player* player;
    Weapon* weapon;
};

#endif
