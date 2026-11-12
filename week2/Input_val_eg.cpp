//
// Created by ukegbu on 9/7/2026.
#include <iostream>
#include <limits>

using namespace std;
int add(int a, int b) {
    return a + b;
}
int main() {
    int x =10, y =20;
    cout << add(x, y) << endl;
    return 0;

    // constexpr int CAPACITY{5};
    //
    // int scores[CAPACITY]{};
    // int invalidInput{};
    // int count{};
    // int value{};
    //
    // cout << "Enter a number:\n";
    //
    // cin >> value;  // First read
    //
    // while (!cin.eof() && count + invalidInput < CAPACITY) {
    //
    //     // Process valid inputs
    //     while (count + invalidInput < CAPACITY && cin) {
    //         scores[count] = value;
    //         ++count;
    //
    //         // Read again only when another entry is allowed
    //         if (count + invalidInput < CAPACITY) {
    //             cin >> value;
    //         }
    //     }
    //
    //     // Process one invalid input
    //     if (count + invalidInput < CAPACITY &&
    //         cin.fail() && !cin.eof()) {
    //
    //         ++invalidInput;
    //
    //         cin.clear();
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //
    //         // Read again only when another entry is allowed
    //         if (count + invalidInput < CAPACITY) {
    //             cin >> value;
    //         }
    //         }
    // }
    //
    // cout << "\nThe array printed:\n";
    //
    // int index{};
    // while (index < count) {
    //     cout << scores[index] << '\n';
    //     ++index;
    // }
    //
    // cout << "\nValid inputs: " << count << '\n';
    // cout << "Invalid inputs: " << invalidInput << '\n';
    // cout << "Total entries: " << count + invalidInput << '\n';
    //
    // return 0;
}