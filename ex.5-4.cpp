2. 鍵盤輸入，輸入 2 個數，再輸入 兩數之和，如果正確，顯示“right”，否則顯示“error”







#include <iostream>
using namespace std;

int main() {
    int a, b, sum_input;

    // Prompt the user to input two numbers
    cout << "Enter two numbers separated by a space: ";
    cin >> a >> b;

    // Prompt the user to input the sum of the two numbers
    cout << "Enter the sum of the two numbers: ";
    cin >> sum_input;

    // Check if the sum is correct
    if (a + b == sum_input) {
        cout << "right" << endl;
    } else {
        cout << "error" << endl;
    }

    return 0;
}









#include <iostream>
using namespace std;

int main() {
    int a, b, sum_input;

    // 輸入兩個數字
    cout << "請輸入第一個數字: ";
    cin >> a;
    cout << "請輸入第二個數字: ";
    cin >> b;

    // 輸入預計的和
    cout << "請輸入兩數之和: ";
    cin >> sum_input;

    // 計算兩數的實際和
    int actual_sum = a + b;

    // 判斷輸入的和是否正確
    if (sum_input == actual_sum) {
        cout << "沒錯" << endl;
    } else {
        cout << "錯誤" << endl;
    }

    return 0;
}











