//
// Created by Andrew Dilanchian on 2/20/18.
//

#ifndef GAME_INVENTORY_H
#define GAME_INVENTORY_H

#include<iostream>
#include<string>
#include<map>

using namespace std;

class inventory {

    friend ostream& operator<<(ostream& os, inventory i);

public:
    //default constructor that starts our player out with 5 inventory slots
    //programmer has the ability to change this though!
    inventory(unsigned int s = 5);
    ~inventory();
    //level up? add some more slots!
    void addSlots(unsigned int s);
    //this is an accessor function to get stuff out of our map below
    const string& at(const int &key) const;

private:
    //each item is represented by a 'string' and is pointed to by an 'int'
    map<int, string> items;
    //just how many inventory spaces we can have: unsigned because it will never be negative!
    unsigned int slots;


};


#endif //GAME_INVENTORY_H
