#include <iostream>
using namespace std;

// ham tinh giai thua n!
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// ham tinh to hop  C(n, k) = n! / (k!(n-k)!)
int combination(int n, int k) {
    if (k > n) {
        return 0; // to hop khong hop le khi k > n
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap k: ";
    cin >> k;

    int result = combination(n, k);

    cout << "Tong hop C(" << n << ", " << k << ") la: " << result << endl;

    return 0;
}

