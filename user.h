#ifndef USER_H
#define USER_H

#include "player.h"
#include "weapon.h"

class BotUser : public Player {
public:
    BotUser(const std::string& name);
    void ChooseWeapon(Weapon* weapon);
};

#endif
