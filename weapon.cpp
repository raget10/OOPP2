// weapon.cpp
#include "weapon.h"
#include "inventory.h"

void Rock::Attack(Inventory* selfInventory, Inventory* opponentInventory) {
    opponentInventory->DecreaseHealth(20);
}

void Paper::Attack(Inventory* selfInventory, Inventory* opponentInventory) {
    opponentInventory->DecreaseHealth(15);
}

void Scissor::Attack(Inventory* selfInventory, Inventory* opponentInventory) {
    opponentInventory->DecreaseHealth(25);
}

void Protection::Attack(Inventory* selfInventory, Inventory* opponentInventory) {
    // Tidak ada pengurangan kesehatan karena ini adalah perlindungan
}
