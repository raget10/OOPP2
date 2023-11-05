#ifndef ROCK_H
#define ROCK_H

#include "weapon.h"

class Rock : public Weapon {
public:
    void Attack(Inventory* opponentInventory) override;
};

#endif
