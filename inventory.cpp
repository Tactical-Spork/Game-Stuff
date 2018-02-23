//
// Created by Andrew Dilanchian on 2/20/18.
//

#include "inventory.h"

ostream &operator<<(ostream &os, inventory i) {

    os << "Your inventory:\n";
    for(auto x: i.items)
        os << x.second << endl;
    return os;
}

inventory::inventory(unsigned int s) : slots{s}
{}

inventory::~inventory() = default;

void inventory::addSlots(unsigned int s) {
    slots+=s;
}

const string &inventory::at(const int &key) const {
    return items.find(key)->second;
}


