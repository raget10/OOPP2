#ifndef SCISSOR_H
#define SCISSOR_H

#include "weapon.h"

class Scissor : public Weapon {
public:
    void Attack(Inventory* opponentInventory) override;
};

#endif
