#include <iostream>
using namespace std;

void changeValue(int* ptr)
{
    *ptr = 100;
}

int main()
{
    int number = 10;

    int* ptr = &number;

    cout << "Value: " << number << endl;
    cout << "Address: " << &number << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Value through pointer: " << *ptr << endl;

    changeValue(&number);

    cout << "New value: " << number << endl;

    return 0;
}