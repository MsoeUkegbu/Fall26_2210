//
// Created by ukegbu on 10/27/2026.
//

#include "Character.h"

#include<iostream>
#include<string>
using namespace std;

Character::Character(const string& name, int health):name{name},health{health} {
    cout<<"\n character constructed"<<endl;
}

void Character::attack() {
    cout<<"\n character attacked"<<endl;
}

string Character::getName() {
    return name;
}

void Character::setHealth(int health) {
    this->health = health;
}


