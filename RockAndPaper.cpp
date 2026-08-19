#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;


    player = getUserChoice();
    std::cout << "Your choice : ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice : ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}


char getUserChoice(){

    char player;
    do{
        
        std::cout << "Rock-Paper-scissors\n";
        std::cout << "**********************\n";
        std::cout << "'R' for rock\n";
        std::cout << "'P' for paper\n";
        std::cout << "'S' for Scissors\n";
        std::cin >> player;

    } while(player != 'R' && player != 'P' && player != 'S');

    return player;

};

char getComputerChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }

    return 0;

};

void showChoice(char choice){

    switch(choice){
        case 'R': std::cout << "Rock\n";
            break;
        case 'P': std::cout << "Paper\n";
            break;
        case 'S': std::cout << "Scissors\n";
            break;
    }

};

void chooseWinner(char player, char computer)
{

    switch(player){
        case 'R': if (computer == 'R'){
                        std::cout << "It's a tie\n";
                    } else if (computer == 'P')
                    {
                        std:: cout <<"You Lose!\n";
                    }else {
                        std::cout << "You win!";
                    }
                    break;
        
        case 'P': if (computer == 'P'){
                        std::cout << "It's a tie\n";
                    } else if (computer == 'S')
                    {
                        std:: cout <<"You Lose!\n";
                    }else {
                        std::cout << "You win!";
                    }
                    break;

        case 'S': if (computer == 'S'){
                        std::cout << "It's a tie\n";
                    } else if (computer == 'R')
                    {
                        std:: cout <<"You Lose!\n";
                    }else {
                        std::cout << "You win!";
                    }
                    break;
               

    }

};