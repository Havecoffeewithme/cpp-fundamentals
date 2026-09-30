#include <iostream> 
using namespace std; 


int main()
{
    int i, j ; 

    // lets get a squarebpattern
    for(i =0 ; i < 4; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            cout << " * ";  
        }
        cout << endl; 
    }

    cout << " " << endl;
    cout << " " << endl;
    
    for(i =0 ; i < 5; i++)
    {
        for(j = 0 ; j < 5 ; j++)
        {
            if(j+i < 5)
                cout << " * "; 
            else
                cout << " ";
        }
        cout << endl; 
    }



}