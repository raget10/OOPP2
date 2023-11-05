#include "paper.h"
#include "inventory.h"

void Paper::Attack(Inventory* selfInventory, Inventory* opponentInventory) {
    opponentInventory->DecreaseHealth(15);
}