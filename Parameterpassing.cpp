#include <iostream>
using namespace std;


void swap(int *a, int *b){

    int temp;
    temp = *a; 
    *a = *b; 
    *b = temp;
}

int main(){

    int x = 222, y = 333;

    swap(&x, &y);
    cout << x << " and " << y;

    return 0;
}














