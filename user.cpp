#include "user.h"

BotUser::BotUser(const std::string& name) : Player(name) {
    // Konstruktor BotUser
}

void BotUser::ChooseWeapon(Weapon* weapon) {
    GetInventory()->SetWeapon(weapon);  // Menggunakan GetInventory
}
