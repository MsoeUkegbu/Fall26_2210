
/** Created by ukegbu on 11/9/2026.
 * Templates
 * For CS2210 001 & 002
*/
#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T, typename K>

K add(T a, K b) {
    return a + b;
}

template<typename T>
class Box {
    T value_;
    public:
    Box(T value) : value_(value) {}
    void setValue(T value) {}
    T getValue() {}

};


int main() {
    string name ="Chibuzo";
    string lastname =" Ukegbu";

cout<<add(2,2.5)<<endl; // converted to const char*

    Box<int> box{4};
    Box<string> box2{"Ben"};
    Box<double> box3{3.5};




}