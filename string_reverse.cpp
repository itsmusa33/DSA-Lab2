#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the string: ";
    cin >> size;

    char* str = new char[size + 1];
    cout << "Enter a string: ";
    cin >> str;

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    cout << "Reversed string: " << str << endl;

    delete[] str;
    return 0;
}