//
// Created by dcopp on 8/6/2023.
//
#pragma once

#ifndef QUICKGUESS_PLAYER_H
#define QUICKGUESS_PLAYER_H


#include <iostream>

class Player {
public:
    int score;
    std::string name;

    void askName(){
        std::cout << "What is your name?\n";
        std::cin>>name;
    }
public:
    void addScore(int points){
        score += points;
    }

};


#endif //QUICKGUESS_PLAYER_H
