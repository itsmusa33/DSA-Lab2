#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value at that location: " << *ptr << endl;
}

int main() {
    //Stack-allocated int
    int iValue;
    iValue = 42;
    analyze_pointer(&iValue);

    cout << endl;

    //Heap-allocated int
    int* hValue = new int;
    *hValue = 99;
    analyze_pointer(hValue);

    delete hValue;
    return 0;
}