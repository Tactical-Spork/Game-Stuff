//
// Created by Andrew Dilanchian on 2/20/18.
// A parent class that holds all the necessary variables for making a job-class in your game!

#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H
#include "inventory.h"

class character {
public:
    virtual ~character();
    bool isBuff();
    bool isDeBuff();
    character(unsigned int health, unsigned int atk, unsigned int magic, unsigned int def, unsigned int spd,
                         unsigned int acc);
private:
    inventory inventory1;
    unsigned int hp;
    unsigned int attack, mp, defense, speed, accuracy;
    bool Buff;
    bool DeBuff;


};


#endif //GAME_CHARACTER_H
