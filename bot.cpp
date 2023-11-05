#include "bot.h"
#include <cstdlib>
#include <ctime>

Bot::Bot(const std::string& name, Inventory* inventory) : Player(name) {
    SetInventory(inventory); // Atur inventaris Bot
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

void Bot::ChooseRandomWeapon() {
    int randomWeapon = std::rand() % 3; // Misalnya, ada 3 jenis senjata
    Weapon* weapon = nullptr;

    switch (randomWeapon) {
        case 0:
            weapon = new Rock(); // Rock adalah jenis senjata
            break;
        case 1:
            weapon = new Paper(); // Paper adalah jenis senjata
            break;
        case 2:
            weapon = new Scissor(); // Scissor adalah jenis senjata
            break;
    }

    GetInventory()->SetWeapon(weapon);
}
