#include<iostream>
#include<math.h>

using namespace std;

typedef struct{
    int a, b;
} PS;
ostream &operator<<(ostream &os, PS p);
istream &operator>>(istream &is, PS p);
int uscln(int x, int y);
PS rutgon(PS p);
PS operator+(PS p1, PS p2);
PS operator-(PS p1, PS p2);
PS operator*(PS p1, PS p2);
PS operator/(PS p1, PS p2);

ostream &operator << (ostream & os, PS p){
    os << p.a << "/" << p.b;
    return p;
}

istream &operator >> (istream & is, PS p){
    cout << "Nhap tu va mau: ";
    is >> p.a >> p.b;
    return p;
}

int uscln(int x, int y){
    x = abs(x);
    y = abs(y);
    if(x * y == 0)
        return 1;
    while (x != y)
    {
        if(x > y){
            x -= y;
        }else{
            y -= x;
        }
    }
    return x;
}

PS rutgon(PS ps){
    PS result;
    int x = uscln(ps.a, ps.b);
    result.a = ps.a / x;
    result.b = ps.b / x;
    return result;
}

PS operator+(PS p1, PS p2){
    PS total;
    total.a = p1.a * p2.b + p2.a * p1.b;
    total.b = p1.b * p2.b;
    return total;
}
PS operator-(PS p1, PS p2){
    PS total;
    total.a = p1.a * p2.b - p2.a * p1.b;
    total.b = p1.b * p2.b;
    return total;
}
PS operator*(PS p1, PS p2){
    PS total;
    total.a = p1.a * p2.b + p2.a * p1.b;
    total.b = p1.b * p2.b;
    return total;
}
PS operator+(PS p1, PS p2){
    PS total;
    total.a = p1.a * p2.b + p2.a * p1.b;
    total.b = p1.b * p2.b;
    return total;
}
