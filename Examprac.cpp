#include <iostream> 
using namespace std; 


int calculateSum(int num[],int size)
    {
        int sum = 0; 

        for(int i=0; i < size; i++){
            sum = sum + num[i];
        }

        return sum;


    }


int main(){


    int num[5] = {10, 20, 30, 40, 50};

    int result = calculateSum(num, 5);

    cout << result;


    return 0;
}