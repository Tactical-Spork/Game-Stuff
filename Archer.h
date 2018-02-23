//
// Created by Andrew Dilanchian on 2/21/18.
// This is an example of creating a class from the character class
// 'Archer' is a child class of the character class since an 'Archer' is a 'character'

#ifndef GAME_ARCHER_H
#define GAME_ARCHER_H
#include "character.h"

class Archer : public character{
public:
    Archer();
    ~Archer();
    ostream& printBio(ostream& os);


private:
    string bio;
};


#endif //GAME_ARCHER_H
