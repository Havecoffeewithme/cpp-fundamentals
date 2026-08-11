# include <iostream> 


int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "******************CALCULATOR PROGRAM*****************************\n";

    std::cout << "Enter either (+ - * / )";
    std::cin >> op;

    std::cout << "Enter a num #1: ";
    std::cin>> num1;

    std::cout << "Enter a num #2: ";
    std::cin>> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;

        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;

        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
            break;

        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;

        default:
            std::cout << "Please enter a valid mathematical opperation";

    }


    std::cout <<"********************************************************************";

    return 0; 
}