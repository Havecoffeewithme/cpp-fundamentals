#include <iostream> 
using namespace std; 


void change(int* num){

    *num = 33; 
}



int main(){

    /**
     * Uninitialized pointers are dangerous 
     * example 
     * int* ptr; declared but not initialized 
     * 
     * You can in the meantime : 
     * int* ptr = nullptr
     * 
     * CONSTANT POINTERS: 
     * example : 
     * const int* ptr 
     * 
     * int x = 10;
     * const int* ptr = &x;
     * // *ptr = 20;  // Not allowed
     * 
     * 
     * but this is allowed : 
     * 
     * int* const ptr = &x;
     * 
     * DYNAMIC MEMORY IN C++ 
     * 
     * C++ can allocate memory dynamically using:
     *  new
     * 
     * int* ptr = new int;
     * 
     */

    int numbers[] = {10, 20, 30, 40, 50};
    int* pnum = numbers ; // pnum points to first element in numbers. 
    // and then pnum++ moves to the next element. 


    int number = 11;
    change(&number);
    // cout << number; 

    cout << "Arrays and Pointers " << endl;
    cout << &numbers << endl; 
    cout << pnum << endl;
    cout << *pnum << endl; 
    cout << pnum++ << endl;
    cout << *pnum << endl; 


    return 0;
}