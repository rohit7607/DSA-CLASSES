#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (n): ";
    cin >> n;

    int arr1[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) { 
        cin >> arr1[i];
    }
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr1[i];
        }
        count += (arr1[i] == candidate) ? 1 : -1;
    }

    
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr1[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        cout << "Majority Element: " << candidate << endl;
    } else {
        cout << "No Majority Element" << endl;
    }

    return 0;
}