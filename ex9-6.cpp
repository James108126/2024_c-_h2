2. 從鍵盤上輸入10個數，求其平均值。




#include <iostream>
using namespace std;

int main() {
    double numbers[2];  
    double sum = 0.0;   


    cout << "請輸入 2 個數字：" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "請輸入第 " << i + 1 << " 個數字: ";
        cin >> numbers[i];
        sum += numbers[i];  
    }


    double average = sum / 2;

  
    cout << "這些數字的平均值是: " << average << endl;

    return 0;
}








#include <iostream>
using namespace std;

int main() {
    double numbers[2];  
    double sum = 0.0;    

    
    cout << "Please enter 2 numbers:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];  
    }

   
    double average = sum / 2;

    
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
