#include <iostream> 

// Introduction to Dyanamic memory

int main(){

    char *pGrades = NULL;
    int size; 

    std::cout << "How many grades to enter in ?";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];

    }

    for(int i = 0; i < size; i++ ){
        std::cout << pGrades[i] << " ";

    }

    // delete the array , to prevent a memory leak
    delete[] pGrades;



    return 0;
}