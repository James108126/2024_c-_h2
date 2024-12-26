1. 從鍵盤輸入10個整數，統計其中正數、負數和零的個數，並在螢幕上輸出。





  #include <iostream>
using namespace std;

int main() {
    int positive_count = 0, negative_count = 0, zero_count = 0;
    int num;

    
    for (int i = 0; i < 10; i++) {
        cout << "請輸入第" << i + 1 << "個整數: ";
        cin >> num;
        
  
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }


    cout << "正數的個數: " << positive_count << endl;
    cout << "負數的個數: " << negative_count << endl;
    cout << "零的個數: " << zero_count << endl;

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int positive_count = 0, negative_count = 0, zero_count = 0;
    int num;

    
    for (int i = 0; i < 10; i++) {
        cout << "Please enter integer " << i + 1 << ": ";
        cin >> num;
        
    
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

   
    cout << "Number of positive numbers: " << positive_count << endl;
    cout << "Number of negative numbers: " << negative_count << endl;
    cout << "Number of zeros: " << zero_count << endl;

    return 0;
}
