#include <iostream>
using namespace std;

inline int max(int a, int b){
    return (a < b) ? b : a;
}

////Phuong phap 1
//inline void dtcvhcn(int a, int b, int &cv, int &dt){
//    dt = a * b;
//    cv = 2 * (a + b);
//}

////Phuong phap 2
inline void dtcvhcn(int a, int b, int &cv, int &dt);

int main() {
    cout << max(13,4) << endl;
    cout << max(23,46) << endl;
    /**
     * khi đó trình biên dịch sẽ dịch như sau
     * cout << (13 < 4) ? 4 : 13;
     * cout << (123 < 46) ? 46 : 23;
     */

    int a[20], b[20], cv[20], dt[20], n;
    cout << "Nhap so hinh chu nhat: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Nhap 2 canh cua hinh chu nhat: ";
        cin >> a[i] >> b[i];
        dtcvhcn(a[i], b[i], cv[i], dt[i]);
    }
    for (int i = 0; i < n; ++i) {
        cout << "Hinh chu nhat thu " << (i + 1) << endl;
        cout << "Do dai hai canh " << a[i] << ", " << b[i] << endl;
        cout << "Dien tich: " << dt[i] << endl;
        cout << "Chu vi: " << cv[i] << endl;
    }
    return 0;
}

void dtcvhcn(int a, int b, int &dt, int &cv){
    dt = a * b;
    cv = 2 * (a + b);
}
