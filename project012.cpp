#include <iostream>
using namespace std;

void main() {
    
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0; // تعداد مقسوم‌علیه‌ها
    int sum = 0;   // مجموع مقسوم‌علیه‌ها

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) { 
            count++;          
            sum += i;         
        }
    }

    cout << endl;
    cout << "Total number of divisors: " << count << endl;
    cout << "Sum of divisors: " << sum << endl;

    cin.get();
    cin.ignore();
}
