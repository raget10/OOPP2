#include "scissor.h"
#include "inventory.h"

void Scissor::Attack(Inventory* selfInventory, Inventory* opponentInventory) {
    opponentInventory->DecreaseHealth(25);
}