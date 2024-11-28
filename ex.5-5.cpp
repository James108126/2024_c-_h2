3、從鍵盤輸入你和你朋友的年齡，編成判斷誰的年齡最大，並列印最大者的年齡。










  #include <iostream>
using namespace std;

int main() {
    int yourAge, friendAge;

    // Input your age and your friend's age
    cout << "Please enter your age: ";
    cin >> yourAge;

    cout << "Please enter your friend's age: ";
    cin >> friendAge;

    // Determine who is older
    if (yourAge > friendAge) {
        cout << "You are the oldest, your age is: " << yourAge << endl;
    } else if (friendAge > yourAge) {
        cout << "Your friend is the oldest, their age is: " << friendAge << endl;
    } else {
        cout << "You and your friend have the same age, which is: " << yourAge << endl;
    }

    return 0;
}









#include <iostream>
using namespace std;

int main() {
    int yourAge, friendAge;

    // 輸入你的年齡和你朋友的年齡
    cout << "請輸入你的年齡: ";
    cin >> yourAge;

    cout << "請輸入你朋友的年齡: ";
    cin >> friendAge;

    // 判斷誰的年齡最大
    if (yourAge > friendAge) {
        cout << "你是年齡最大的，年齡為: " << yourAge << endl;
    } else if (friendAge > yourAge) {
        cout << "你的朋友是年齡最大的，年齡為: " << friendAge << endl;
    } else {
        cout << "你和你朋友年齡相同，年齡為: " << yourAge << endl;
    }

    return 0;
}






