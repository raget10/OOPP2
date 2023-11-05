#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "user.h"
#include "bot.h"

class GameManager {
public:
    GameManager(User* user, Bot* bot);
    void PlayGame();

private:
    User* user;
    Bot* bot;
};

#endif