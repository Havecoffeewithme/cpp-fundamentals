#include <iostream>
using namespace std;


int main(){

    int A[7] = {22, 27,28,32,40,42, 53};
    int max = A[0];
    int n = 7 , i; 

    for(i = 0; i < 7 ; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }

    }

    cout << "The max value is : " << max << endl; 




    return 0;
}