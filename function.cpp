#include <iostream>
using namespace std;

void display(string name="Lebo"){
    cout <<"Nice to meeet you " << name << endl; 
}

void nameAndAge(string name , int age){
    cout << name << " is " << age << "'s old and he has beeen with us since the year started." << "\n";
}

int add( int a, int b){
    return a + b ;
}



// Passing by reference 
void swapNums(int &x, int &y){
    int z=x;
    x=y;
    y=z;
}

int main(){

    /** 
    display("X-men");
    nameAndAge("Dorah", 44);
    cout << add(11, 24)<< "\n";
    **/ 

    int age = 552; 
    int* ptr = &age;

    cout << age << endl;
    cout << &age << endl;
    cout << ptr << endl;
    cout << *ptr << endl; 
    cout << " " << endl;
    cout << " " << endl; 


    int year = 2022; 
    
    cout << year<<endl; 

    int* pttr = &year; 

    *pttr = 2026; 

    cout << year; 



    return 0;
}