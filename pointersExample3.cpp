#include <iostream>
using namespace std; 



void changeValue(int* ptr){
    *ptr = 100;
}

int main(){
    
    int number = 99;

    int* ptr = &number; 

    cout << "Value: " << number << endl;
    cout << "Address: " << &number << endl;
    cout << "Pointers : " << ptr << endl;
    cout << "Value through pointer" << *ptr << endl;

    changeValue(&number);

    cout << "The new value is " << number << " \n ";


    return 0; 

}