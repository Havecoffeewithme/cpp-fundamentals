#include <iostream>
using namespace std;


int main(){

    int A[10]; 
    int n = 10 , i , key; 

    cout << "Enter numbers to put it the Array" ; 

    for(i = 0; i < n ; i++)
    {
        cin>> A[i];
        
    }

    cout << "Enter the key , you would like to search";
    cin>> key;

    for(i = 0; i < n ; i++){
        if(key == A[i])
        {
            cout << "Our location is : " << i << endl;
            return 0;
        }
    }
    cout << "key " << key << " Not found!";


    return 0;
}