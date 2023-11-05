#ifndef PAPER_H
#define PAPER_H

#include "weapon.h"

class Paper : public Weapon {
public:
    void Attack(Inventory* opponentInventory) override;
};

#endif
