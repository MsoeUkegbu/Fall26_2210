/**
/* Created by ukegbu on 11/9/2026.
 * Operator Overloding and friend keyword
*/

#include<iostream>
using namespace std;
class points {
    int x{};
    int y{};
    public:

    points(int a, int b) : x{a}, y{b}{}
    int getX()const { return x; }
    int getY() const { return y; }


  friend ostream& operator<<(ostream& lhs, const points p) {
        lhs<<"points: "<<"("<<p.x<<","<<p.y<<")"<<endl;
        return lhs;

    }

};

istream& operator>>(istream& in, points& p) {
    int x{};
    int y{};

    if (in>>x>>y) {
        p = points(x,y);
    }
    return in;
}
points operator+(points p1, points p2) {
  const  points lhs{p1.getX()+ p2.getX(),p1.getY()+ p2.getY()};
    return lhs;
}

bool operator==(points p1, points p2) {
    return p1.getX()==p2.getX() && p1.getY()==p2.getY();
}

int main() {

    points p1{1,2};
    points p2{2,3};
    cout << p1.getX() << " " << p1.getY() << endl;
    cout<< p1<<endl;
    cin>> p2;
    cout<< p2<<endl;
    cout << (p1 > p2) << endl;
}