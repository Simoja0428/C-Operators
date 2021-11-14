//Written By: Jacob Simonek
#include <iostream>
#include <string>
#include <algorithm>

/*
The following interactive demo program makes use of some of the different operators talked about in
this repository. Notice  the different ways certain primitive data types can be manipulated and 
compared with eachother.
*/

using namespace std;

int main(int argc, char* argv[])
{
    double num1; //Variable that will hold the first double the user enters
    double num2; //Variable that will hold the second double the user enters
    string name1 = "Jacob"; //Variable holds string jacob which is used for comparison
    string name2 = "Liv"; //Variable holds string liv which is used for comparison
    string nameIn; //Variable that will hold the string the user enters

    cout << "Operations Interactive Demo:" << endl; //Title Print statement

    cout << "Enter a number to perform operations with: " << endl; //Print statement to prompt user
    cin >> num1; //First double user enters is stored in num1

    cout << "Enter a number number to perform operations with: " << endl; //Print statement to prompt user
    cin >> num2; //Second double user enters is stored in num2

    cout << "Enter a string to compare to Jacob or Liv." << endl; //Print statement to prompt user
    cin >> nameIn; //String user enters is stored in nameIn

    cout << "Addition:      " << num1 + num2 << endl; //Performs addition on numbers and prints the result
    cout << "Subtraction:   " << num1 - num2 << endl; //Performs subtraction on numbers and prints the result
    cout << "Multipication: " << num1 * num2 << endl; //Performs multiplication on numbers and prints the result
    cout << "Division:      " << num1 / num2 << endl; //Performs division on numbers and prints the result
            
    if (num1 > num2) //Checks to see if the first num is larger than the second
        cout << "Larger Num:    " << num1 << endl; //Prints the first number is larger
    else if (num1 < num2) //Checks to see if the second num is larger than the first
        cout << "Larger Num:    " << num2 << endl; //Prints the second number is larger
    else 
        cout << "*Entered Numbers are Equal Value*" << endl; //Prints the numbers are equal

    if(nameIn == name1) //Compares the lvalue to Jacob
        cout << "The names Jacob and " << nameIn << " are the same!" << endl; //Prints result of comparison

    if (nameIn != name2) //Compares the value to Liv using a different way
        cout << "The names Liv and " << nameIn << " are not the same!" << endl; //Prints results of comparison

    return 0;
}