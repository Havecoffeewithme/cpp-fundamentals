#include <iostream> 
using namespace std; 



int main(){

    int day;

   
    cout << "Enter a number to represent day of the week : ";
    cin >> day; 


    if(day > 0 && day <= 7 )
    {
        switch(day)
        {
            case 1:
                cout << "Today is Monday" << endl;
                break;
            case 2: 
                cout << "Today is Tuesday" << endl;
                break;
            case 3: 
                cout << "Today is Wednesday" << endl;
                break;
            case 4: 
                cout << "Today is Thursday" << endl;
                break;
            case 5: 
                cout << "Today is Friday" << endl;
                break;
            case 6: 
                cout << "Today is Saturday" << endl;
                break;
            case 7: 
                cout << "Today is Sunday" << endl;
                break;
            
        }


    } else {
        cout << "Enter a valid number between 1 and 7";
    }
    

    return 0;
}