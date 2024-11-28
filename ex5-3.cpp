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






#include <iostream>
#include <algorithm> // 包含 std::min 函數

using namespace std;

int main() {
    // 定義四個整數變數
    int num1, num2, num3, num4;

    // 輸入四個整數
    cout << "請輸入第一個整數: ";
    cin >> num1;
    cout << "請輸入第二個整數: ";
    cin >> num2;
    cout << "請輸入第三個整數: ";
    cin >> num3;
    cout << "請輸入第四個整數: ";
    cin >> num4;

    // 使用 std::min 函數找出最小的數字
    int min_num = min({num1, num2, num3, num4});

    // 顯示最小的數字
    cout << "四個數字中的最小的數是: " << min_num << endl;

    return 0;
}








