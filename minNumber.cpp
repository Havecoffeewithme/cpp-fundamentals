#include <iostream> 
using namespace std; 


int main()
{
    int A[10] = {2, 4, 5, 6, 23, 34, 40 , 44}; 

    int max = INT_MIN; 
    int i ; 

    for (i = 0; i <= 10 ; i++){
        if(A[i] > max ){
            max = A[i];
        }
    }

    cout << "The maximum number is " << max << endl;

    return 0;



}