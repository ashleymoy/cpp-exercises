#include <iostream>
#include <string>

void play_game()
{
    std::cout << "Game is being played\n";
}


int main()
{
    int choice; // declare variable

    do // Do while loop happens at least once.
    {
        std::cout << "Let's play a game:" << std::endl << "0. Quit" << std::endl << "1. Play game\n";
        std::cin >> choice;

        /* A switch statement allows a variable to be tested against a list of values. 
        Each value is called a case, and the variable being switched on is checked for each case. */

        switch(choice)
        {
            case 0:
                std::cout << "Thanks for nothing!\n";
                return 0;
            case 1:
                play_game();
                break;
    }
    } while(choice != 0);
}