#include <iostream>
using namespace std;
// ham tinh uoc so chung lon nhat (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// ham tinh boi so chung nho nhat (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b);
    cout << "Uoc so chung lon nhat cua " << a << " va " << b << " la: " << gcdResult << endl;
    cout << "Boi so chung nho nhat cua " << a << " va " << b << " la: " << lcmResult << endl;
    return 0;
}

