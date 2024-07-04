#include <iostream>
using namespace std;

int main() {
    int a[10], k, p, swap, n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (k = 0; k < n - 1; k++) {
        for (p = 0; p < n - k - 1; p++) {
            if (a[p] > a[p + 1]) {
                swap = a[p];
                a[p] = a[p + 1];
                a[p + 1] = swap;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}