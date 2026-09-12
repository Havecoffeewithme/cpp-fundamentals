#include <iostream>


double getTotal(double prices[], int size);

int main(){

    double prices[] = {20.50, 33,50, 27.66, 26.33};

    int size = sizeof(prices)/sizeof(prices[0]);

    double total = getTotal(prices, size);

    std::cout << "$" << total;


    return 0;
}

// so when a function recieves an array , it decays into a pointer , so it no longer knows the size of the array 
// you just have to calculate the size of the arrray and pass it in as an arguement. 
double getTotal(double prices[], int size){

    double total = 0;

    for(int i; i < size ; i++){
        total = total + prices[i];
    }
    
    return total;

}

