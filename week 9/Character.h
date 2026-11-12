//
// Created by ukegbu on 10/27/2026.
//

#ifndef FALL26_PREP_CHARACTER_H
#define FALL26_PREP_CHARACTER_H

#include<iostream>
#include<string>
using namespace std;

class Character {
private:
    string name;
    int health;

    public:
    Character(const string& name,int health);
    void attack();
    string getName();
    void setHealth(int health);
};


#endif //FALL26_PREP_CHARACTER_H