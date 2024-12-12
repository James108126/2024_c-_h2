1、編寫一個程式,從4個整數中找出最小的數,並顯示此數。






#include <iostream>
using namespace std;

int main() {
   
    int num1, num2, num3, num4;

   
    cout << "Please enter the first integer: ";
    cin >> num1;
    cout << "Please enter the second integer: ";
    cin >> num2;
    cout << "Please enter the third integer: ";
    cin >> num3;
    cout << "Please enter the fourth integer: ";
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











  #include <iostream>
#include <algorithm> 

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

    
    int min_num = min({num1, num2, num3, num4});


  
    cout << "四個整數中最小的數是: " << min_num << endl;

    return 0;
}


    
    cout << "The smallest number among the four integers is: " << min_num << endl;

    return 0;
}
