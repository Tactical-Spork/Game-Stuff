//
// Created by Andrew Dilanchian on 2/20/18.
//

#include "character.h"

bool character::isBuff() {
    return Buff;
}

bool character::isDeBuff() {
    return DeBuff;
}

//a constructor that initializes all specs of your character
//since this class will mostly be used by other programmer-created classes, this is the only constructor, and it has A LOT of variables
character::character(unsigned int health, unsigned int atk, unsigned int magic, unsigned int def, unsigned int spd,
                     unsigned int acc) : hp{health}, attack{atk}, mp{magic}, defense{def}, speed{spd}, accuracy{acc}
{
    //just some values that could possibly be later applied to affect stats, depensing on the buff/debuff
    Buff = false;
    DeBuff = false;
}

character::~character() = default;

