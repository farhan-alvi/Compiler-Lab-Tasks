
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = arr[i] + sum;
    }

    double average = double(sum) / n;

    cout << "The average value is: " << average << endl;

    return 0;
}
