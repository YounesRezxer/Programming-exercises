#include <iostream>
using namespace std;

// تابعی برای بررسی اول بودن عدد
bool isPrime(int num) {
    if (num <= 1) {
        return false; // اعداد کمتر از 2 اول نیستند
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // اگر عدد بر i بخش‌پذیر باشد، اول نیست
        }
    }
    return true; // اگر هیچ بخش‌پذیری پیدا نشد، عدد اول است
}

int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    cout << "Prime numbers less than " << num << " are: ";
    
    for (int i = 2; i < num; ++i) {
        if (isPrime(i)) { // اگر عدد اول باشد، چاپ می‌شود
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
//5