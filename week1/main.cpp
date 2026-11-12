#include <array>
#include <iostream>
#include <vector>
#include<limits>

using namespace std;
int add(const int a, const int b) {
    return a + b;
}
void printVector(const std::vector<int>& list) {
    std::cout << "[";
    for (int i = 0; i < list.size(); i++) {
        if (i>0) {
            std::cout << ", ";
        }
        std::cout << list[i];
    }
    std::cout << "]" << std::endl;
}

int readScores(int scores[], const int max) {
    double s;
    int counter = 0;
    std::cin >> s;
    while (counter < max && std::cin.good()) {
        scores[counter] = s;
        std::cin >> s;
        counter++;
    }
    return counter;
}
int main(){
//     std::array<int,5> an = {2,3,4,5,6};
//     for (const auto& i: an)
//         std::cout << i << std::endl;
//
//
//
//     std::vector<int>list(6,5);
//     list.push_back(20);
//     list.push_back(30);
//     list.push_back(40);
//     list.push_back(50);
// printVector(list);
//     std::cout<<list.front()<<std::endl;
//

    int constexpr capacity{5};
    int scores[capacity];
    int count{};
    int invalidInputs{};
    int value{};

    cin >> value;
    while (!cin.eof() && count< capacity) {

        while (cin && count < capacity) {
            scores[count] = value;
            count++;
            if (count< capacity)
                cin >> value;
        }
        if (cin.fail() && !cin.eof()) {
            invalidInputs++;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (count < capacity)
               cin>>value;
        }

    }
    int index{};
    while (index < count) {
        cout << scores[index] << '\n';
        index++;
    }
    cout<<"Invalid inputs: "<<invalidInputs<<"  \n"<<endl;

    return 0;
    }


