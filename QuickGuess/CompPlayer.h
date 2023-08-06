//
// Created by dcopp on 8/6/2023.
//
#pragma once

#ifndef QUICKGUESS_COMPPLAYER_H
#define QUICKGUESS_COMPPLAYER_H


#include "Player.h"

class CompPlayer : public Player{
public:
    CompPlayer(std::string name){
        this->name=name;
    }

    std::string getName(){
        return this->name;
    }

    int guessNum(int guess, bool tooHigh){
        int compGuess;
        if (tooHigh){
            compGuess = (rand() % (guess - 2)) + 1 ;
        } else{
            compGuess = (rand() % (20 - guess + 1)) + guess;
        }
        return compGuess;
    }
};


#endif //QUICKGUESS_COMPPLAYER_H
