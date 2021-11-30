/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dynie Mesoneuvre
 */


#include <iostream>

using namespace std;

/*declaring a non-reference function argument const (e.g., void
f(const int) means having a variable that consistently stays the same and cannot be changed. This would be used
when you are working with variables that will always stay the same. People don't do it often because most of the time
the variables change throughout the program.)*/

// function to add two ints and return sum using constants
int addConstant(const int a, const int b){
    int sum = a + b;
    return sum;
}
// function to add two ints and return sum without constants
void add(int a, int b)
{
    //changing a because it is not a constant
     a = a + b;
    int sum = a + b;
    cout << "this is the sum without constants " << sum;

}
// function to add two ints and return difference using constants
int subtractConstant(const int a, const int b)
{
    int difference = a - b;
    return difference;

}
// function to add two ints and return sum without constants
void subtract(int a, int b)
{
    //changing b because it is not a constant
    b = b * 2;
    int difference = a - b;
    cout << "this is the difference without constants " << difference;

}
int main() {
    //calling add constant function
    int x = addConstant(5, 5);
    //output
    cout  << "this is the sum using constants " << x ;
    cout  << ("\n");
    //calling subtract constant function
    int x1 = subtractConstant(10, 5);
    //output
    cout  << "this is the difference using constants " << x1 ;
     cout  << ("\n");
     //calling add function
    add(5, 5);
     cout  << ("\n");
     //calling subtract function
    subtract(10, 5);

    return 0;
}
