// weapon.h
#ifndef WEAPON_H
#define WEAPON_H

class Inventory; // Forward declaration

class Weapon {
public:
    virtual void Attack(Inventory* selfInventory, Inventory* opponentInventory) = 0;
};

class Rock : public Weapon {
public:
    void Attack(Inventory* selfInventory, Inventory* opponentInventory) override;
};

class Paper : public Weapon {
public:
    void Attack(Inventory* selfInventory, Inventory* opponentInventory) override;
};

class Scissor : public Weapon {
public:
    void Attack(Inventory* selfInventory, Inventory* opponentInventory) override;
};

class Protection : public Weapon {
public:
    void Attack(Inventory* selfInventory, Inventory* opponentInventory) override;
};

#endif
