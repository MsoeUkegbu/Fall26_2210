
/**
 * SmartPointer Demo
 *
 *
 * **/
 #include<iostream>
using namespace std;

void change(int* arr) {
    *arr = *arr + 5;
    arr =nullptr;
    cout<<"\n size of array: "<< sizeof(arr)<<endl;
   // cout<<" *arr: "<<*arr<<endl;
}


int main() {
    int num[3]{10,20,30};
    int* p  = num;
    change(p);
    cout<<"\n element one "<< num[0]<<endl;
    cout<<"\n *p: "<< *p<<endl;
    cout<<"\n : "<< (*num+3)<<endl;

}