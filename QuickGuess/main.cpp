#include <iostream>
#include <string>
#include "Player.h"
#include "CompPlayer.h"


int main() {
    CompPlayer Josh = CompPlayer("Josh");
    Player player = Player();

    std::cout << "Today we'll be playing a number guessing game!\n";
    std::cout << "The goal is to guess a number between 1 and 20 within 5 guesses!\n";
    std::cout << "But there's a twist! You'll be playing against my friend " +Josh.getName()+"!\n";
    std::cout << "After each guess, if you get it wrong, Josh gets to guess, and whoever wins gets points based on how many guesses they've made.\n";
    std::cout << "Let's begin!\n";

    int goal;
    goal = (rand() % (20 - 2)) + 1;

    int turns;
    turns = 5;

    bool keepPlaying = true;

    do {
        std::cout << "Your turn to guess! PLease enter a number between 1 and 20!\n";
        int playerGuess;
        std::cin >> playerGuess;
        if (playerGuess>goal){

            std::cout << "I'm afraid that guess is too high!\n";
            int compGuess;
            compGuess = Josh.guessNum(playerGuess,true);
            std::cout << "Josh guesses " + std::to_string(compGuess) + ".\n";

            if(compGuess==goal){
                std::cout << "" + Josh.getName() + " wins " + std::to_string(turns) + " points!\n";
                Josh.addScore(turns);

                std::cout << "Good effort, but Josh got it right first! Would you like to play another round? If so, please enter y, else the game will end.\n";
                char cont;
                std::cin >> cont;
                if (cont=='y') {
                    turns = 5;
                    goal = (rand() % (20 - 2)) + 1;
                    std::cout << "All set up to play again! Let's begin!\n";
                } else
                    keepPlaying= false;

            } else{
                std::cout << "" + Josh.getName() + " didn't manage to guess right either!\n";
            }

            turns -= 1;

            if(turns==0){

                std::cout << "Good effort, but the turns have run out! Would you like to play another round? If so, please enter y, else the game will end.\n";
                char cont;
                std::cin >> cont;
                if (cont=='y') {
                    turns = 5;
                    goal = (rand() % (20 - 2)) + 1;
                    std::cout << "All set up to play again! Let's begin!\n";
                } else
                    keepPlaying= false;

            }

        } else if (playerGuess<goal){

            std::cout << "I'm afraid that guess is too low!\n";
            int compGuess;
            compGuess = Josh.guessNum(playerGuess, false);
            std::cout << "Josh guesses " + std::to_string(compGuess) + ".\n";

            if(compGuess==goal){
                std::cout << "" + Josh.getName() + " wins " + std::to_string(turns) + " points!\n";
                Josh.addScore(turns);

                std::cout << "Good effort, but Josh got it right first! Would you like to play another round? If so, please enter y, else the game will end.\n";
                char cont;
                std::cin >> cont;
                if (cont=='y') {
                    turns = 5;
                    goal = (rand() % (20 - 2)) + 1;
                    std::cout << "All set up to play again! Let's begin!\n";
                } else
                    keepPlaying= false;

            } else{
                std::cout << "" + Josh.getName() + " didn't manage to guess right either!\n";
            }

            turns -= 1;

            if(turns==0){

                std::cout << "Good effort, but the turns have run out! Would you like to play another round? If so, please enter y, else the game will end.\n";
                char cont;
                std::cin >> cont;
                if (cont=='y') {
                    turns = 5;
                    goal = (rand() % (20 - 2)) + 1;
                    std::cout << "All set up to play again! Let's begin!\n";
                } else
                    keepPlaying= false;

            }

        } else if (playerGuess==goal){

            std::cout << "You got it right! You win " + std::to_string(turns) + " points!\n";
            player.addScore(turns);

            std::cout << "Well played! Would you like to play another round? If so, please enter y, else the game will end.\n";
            char cont;
            std::cin >> cont;
            if (cont=='y') {
                turns = 5;
                goal = (rand() % (20 - 2)) + 1;
                std::cout << "All set up to play again! Let's begin!\n";
            }
            else
                keepPlaying= false;
        }


    } while (keepPlaying);

    return 0;
}
