1、編寫一個程式,從4個整數中找出最小的數,並顯示此數。





#include <iostream>
using namespace std;
int main() {
    // Declare four integer variables
    int num1, num2, num3, num4;

    // Prompt the user for input
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;
    cout << "Enter the fourth integer: ";
    cin >> num4;

    // Find the smallest number using the min function
    int smallest = num1; // Assume num1 is the smallest initially

    if (num2 < smallest) smallest = num2;
    if (num3 < smallest) smallest = num3;
    if (num4 < smallest) smallest = num4;

    // Display the smallest number
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
