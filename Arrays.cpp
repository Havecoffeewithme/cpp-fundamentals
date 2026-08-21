#include <iostream>


int main(){


    //arrays 
    std::string cars[5];

    cars[0] = "Volvo V40 T5";
    cars[1] = "Audi RS4 hatchbag";
    cars[2] = "Lexus LFA";
    cars[3] = "Mercedes clasic";
    cars[4] = "Jeep Wrangler";


    std::string students[] = {"spider-man", "Batman", "Ant-man", "Hulk", "Iron-man", "Man of steel", "999"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    
    char grades[] = {'A', 'B', 'C', 'F',};

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] <<'\n';
    }

    return 0;

}

