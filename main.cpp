/**
 *  Micheál Carroll
 *  Exercise 3
 *  standard deviation calculator
 *  10/10/2017
 */

//Preprocessor directives
#include <iostream>
using namespace std;

//main function
int main(void)
{
    int i;
    double values[10] = {0}, sum = 0, aver;

    //Project title
    cout << "Standard Deviation Calculator\n" << endl;

    //For loop

    for (i = 0; i < 10; i++)
    {
        cout << "Enter value " << i << ": ";
        cin >> values[i];
        sum += values[i];
     }
    aver = (sum / 10);
    cout << "Average = " << aver;


    return 0;
}
