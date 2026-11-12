//
// Created by ukegbu on 11/11/2026.
//

#include<iostream>
using namespace std;
class student {
    public:
    int* score;
     explicit student(int value): score{ new int {value}} {}

    student( const student& other): score{ new int {*other.score}} {

    }
 student operator= (const student& other) {
         if ( this!=&other) {
             score = new int{*other.score};
         }
         return *this; // s1=s2=s3
     }

    int getScore() { return *score; }
    void setScore(int value) { *score = value; }

    ~student() {
        delete score;
    }

};


int main() {
    student s1{60}; student s2{s1}; // addresses are copied instead of the object

    // invoking the copy constructor

    cout << s1.getScore() << endl;
    cout << s2.getScore() << endl;
    s1.setScore(90);
    s1 = s2;

    cout << s1.getScore() << endl;
    cout << s2.getScore() << endl;
    student* ptr = &s1;
    student* ptr2 = &s2;

    cout<< ptr<< ", "<< ptr2<< endl;



    // invokes the assignemnt operator

  // s2 destroyed
    // s1 destroyed
}