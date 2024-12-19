1、編寫一個程式,從4個整數中找出最小的數,並顯示此數。





#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;


    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;
    cout << "Enter the fourth integer: ";
    cin >> num4;

   
    int min_num = num1;


    if (num2 < min_num) {
        min_num = num2;
    }
    if (num3 < min_num) {
        min_num = num3;
    }
    if (num4 < min_num) {
        min_num = num4;
    }


    cout << "The smallest number is: " << min_num << endl;

    return 0;
}








#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

   
    cout << "請輸入第一個整數: ";
    cin >> num1;
    cout << "請輸入第二個整數: ";
    cin >> num2;
    cout << "請輸入第三個整數: ";
    cin >> num3;
    cout << "請輸入第四個整數: ";
    cin >> num4;

   
    int min_num = num1;


    if (num2 < min_num) {
        min_num = num2;
    }
    if (num3 < min_num) {
        min_num = num3;
    }
    if (num4 < min_num) {
        min_num = num4;
    }

    cout << "最小的數字是: " << min_num << endl;

    return 0;
}
