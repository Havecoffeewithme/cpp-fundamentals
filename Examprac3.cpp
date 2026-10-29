#include <iostream> 
#include <climits>

using namespace std; 



int main(){

    
    int SIZE = 10; 

    int numbers[10] = {3, 6, 11, 17, 20, 25, 33, 40, 42, 53};
    int smallest = numbers[0];

    for(int i=0 ; i < 10 ; i++){
        if(numbers[i] < smallest){
            smallest = numbers[i];
        }
    }

    cout << "Smallest value is " << smallest << endl;


    int A[10] = {2, 4, 5, 6, 23, 34, 40 , 44, 77, 82}; 

    int max = INT_MIN;

    for(int i = 0; i < 10 ; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }

    }

    cout << "Biggest value is " << max << endl;



    return 0; 
}