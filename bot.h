#ifndef BOT_H
#define BOT_H

#include "player.h"
#include "inventory.h" // Sertakan header Inventory

class Bot : public Player {
public:
    Bot(const std::string& name, Inventory* inventory); // Tambahkan Inventory ke konstruktor
    void ChooseRandomWeapon();
};

#endif
