#include <iostream>
#include <ctime> 


int main()
{
    srand(time(0));
    int randnum = rand() % 5 + 1;

    switch(randnum){
        case 1:
            std::cout << randnum << " : You are in danger"; 
            break;
        case 2:
            std::cout << randnum << " : You are not out of the woods";
            break;
        case 3:
            std::cout << randnum << " : You barely made it, you luccky sun of a gun";
            break;
        case 4:
            std::cout << randnum << " : You are comfortable";
            break;
        case 5:
            std::cout << randnum << " Get out of here, almost hit the jackpot";
            break;
        case 6:
            std::cout << randnum << " The Peferct-Perfect score, The ultimate score";
            break;
    
    }

    return 0;


}