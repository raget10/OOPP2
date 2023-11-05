#include "rock.h"
#include "inventory.h"

void Rock::Attack(Inventory* selfInventory, Inventory* opponentInventory) {
    opponentInventory->DecreaseHealth(20);
}
