#include <iostream>
using namespace std;

// ham xac dinh so nho hon trong 2 so
int minOfTwo(int a, int b) {
    return (a < b) ? a : b;
}

// ham xac dinh so nho hon trong 3 so
int minOfThree(int a, int b, int c) {
    return minOfTwo(a, minOfTwo(b, c));
}

int main() {
    int num1, num2, num3;

    cout << "Nhap so thu nhat: ";
    cin >> num1;

    cout << "Nhap so thu hai: ";
    cin >> num2;

    cout << "Nhap so thu ba: ";
    cin >> num3;

    int minNumber = minOfThree(num1, num2, num3);

    cout << "So nho nhat trong ba so " << num1 << ", " << num2 << " va " << num3 << " la: " << minNumber << endl;

    return 0;
}

