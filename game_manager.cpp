#include "game_manager.h"
#include <iostream>

GameManager::GameManager(User* user, Bot* bot) : user(user), bot(bot) {
    user->SetOpponent(bot);
    bot->SetOpponent(user);
}

void GameManager::PlayGame() {
    while (!user->IsDefeated() && !bot->IsDefeated()) {
        std::cout << "Choose your weapon (0: Rock, 1: Paper, 2: Scissor, 3: Protection): ";
        int choice;
        std::cin >> choice;

        if (choice == 0) {
            user->ChooseWeapon(new Rock());
        }
        else if (choice == 1) {
            user->ChooseWeapon(new Paper());
        }
        else if (choice == 2) {
            user->ChooseWeapon(new Scissor());
        }
        else if (choice == 3) {
            user->ChooseWeapon(new Protection());
        }

        user->Attack();
        bot->Play();
    }

    if (user->IsDefeated()) {
        std::cout << "Bot wins!" << std::endl;
    }
    else {
        std::cout << "User wins!" << std::endl;
    }
}