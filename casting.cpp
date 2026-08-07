#include <iostream>

using namespace std;

int main(){

    double x = (int) 3.1444 ;
    cout << x << '\n';

    int correct = 77 ;
    int questions = 113 ;

    double score = correct/(double) questions * 100;

    cout << score << '\n';

    return 0;  


}