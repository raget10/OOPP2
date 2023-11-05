#include "user.h"
#include "bot.h"
#include "game_manager.h"
#include <iostream>

int main() {
    std::string botUserName;
    std::string botName = "Bot"; // Ganti dengan nama bot yang diinginkan

    BotUser* botUser = new BotUser(botUserName);
    Bot* bot = new Bot(botName);

    GameManager gameManager(botUser, bot);
    gameManager.PlayGame();

    delete botUser;
    delete bot;

    return 0;
}
