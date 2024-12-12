1. 主函式輸入 高與寬，編寫程式，其中自定義一函式，算矩形面積


#include <iostream>
using namespace std;

float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;

    
    cout << "請輸入矩形的長度: ";
    cin >> length;
    if (length <= 0) {
        cout << "長度必須是正數!" << endl;
        return 1; 
    }

  
    cout << "請輸入矩形的寬度: ";
    cin >> width;
    if (width <= 0) {
        cout << "寬度必須是正數!" << endl;
        return 1; 
    }


    float area = calculateArea(length, width);


    cout << "矩形的面積是: " << area << endl;

    return 0;
}




#include <iostream>
using namespace std;

float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;
    
    cout << "Please enter the length of the rectangle: ";
    cin >> length;

    cout << "Please enter the width of the rectangle: ";
    cin >> width;

    float area = calculateArea(length, width);

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
