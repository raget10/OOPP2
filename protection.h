#ifndef PROTECTION_H
#define PROTECTION_H

#include "weapon.h"

class Protection : public Weapon {
public:
    void Attack(Inventory* opponentInventory) override;
};

#endif