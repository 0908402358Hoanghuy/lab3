#include<iostream>
using namespace std;
void ve(int cd, int cr) {
    for (int i = 0; i < cr; i++) {
        for (int j = 0; j < cd; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    float cd, cr;
    cout << "Nhap chieu dai hinh chu nhat: ";cin >> cd;
    cout << "Nhap chieu rong hinh chu nhat: ";cin >> cr;
int chuvi = (cd+cr)*2;
int dientich = cd * cr;



    cout<<"Chu vi hinh chu nhat la: " << chuvi << endl;
    cout<<"Dien tich hinh chu nhat la: " << dientich << endl;
    
        cout << "Ve hinh chu nhat:" << endl;
    ve(cd, cr);

    return 0;
}
