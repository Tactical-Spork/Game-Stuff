//
// Created by Andrew Dilanchian on 2/21/18.
//

#include "Archer.h"

Archer::Archer() : character::character(10, 5, 0, 3, 10, 8)
{
    bio = "blah blah blah blah blah";
}

ostream& Archer::printBio(ostream& os) {

    os << bio << endl;
    return os;
}

Archer::~Archer() = default;

