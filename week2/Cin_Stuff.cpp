
#include<iostream>
#include<limits>
using namespace std;

int main() {
    int constexpr CAPACITY{5};
    int scores[CAPACITY]{};
    int invalidInput{};
    int count{};
    int value{};


    cin>> value;
    while (!cin.eof()) {

        if (cin && count < CAPACITY ) {
            scores[count] = value;
            count++;
        }else if (count+invalidInput <CAPACITY && !cin.eof() && cin.fail()) {
            ++invalidInput;
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

            if (count + invalidInput <CAPACITY) {
                cin >> value;
            }


        }

        cout<<" Arrays printed: \n";
        int index{};
        while (index < count) {
            cout<<scores[index]<<"\n";
            index++;
        }

        cout<<" Total entries : "<< count + invalidInput <<"\n";
        cout<<"Invalid input: "<< invalidInput <<"\n";
        return 0;
    }
}