#include <iostream>
using namespace std;

double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    double result = 1.0;
    int absN = (n < 0) ? -n : n;

    while (absN > 0) {
        if (absN % 2 == 1) {
            result *= x;
        }
        x *= x;
        absN /= 2;
    }
    return (n < 0) ? 1.0 / result : result;
}
int main() {
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    double result = power(x, n);
    cout << "Ket qua: " << result << endl;
    return 0;
}

