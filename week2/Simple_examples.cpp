//
// Created by ukegbu on 9/7/2026.
//
#include <cstdint>
#include<iostream>
#include <limits>
#include<stdexcept>
#include<type_traits>
#include <vector>
#include<array>
using namespace std;

int addBonus(int score) {
     score +=5;
    return score;
}


int main() {
    int score{80};
   const int ans = addBonus(score);
    cout<<ans<<'\n';

  }



