#include <iostream> 
using namespace std; 



int main(){

    const int SIZE = 9;
    int sum = 0;
    int numbers[SIZE];

    cout << "Enter numbers to fill your array " << endl;

    for(int i =0; i < SIZE; i++)
    {
        cout << "Number" << (i + 1) << " : ";
        cin >> numbers[i];

    }

    cout << "\nYou entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    

    return 0;
}