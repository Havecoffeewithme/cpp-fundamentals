#include <iostream>
using namespace std;


int main()
{

    int i, n;
    cout<< "Enter a number you want to multiply";
    cin >> n;

    for(i = 1; i <= 10; i++)
    {
         cout<<n<<"X"<<i<<"="<<i*n <<endl;
    }


    return 0;
}