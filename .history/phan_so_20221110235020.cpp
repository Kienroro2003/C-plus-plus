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
    {
        /* code */
    }
    
    return 0;
}

PS rutgon(PS ps){
    PS result;
    int x 
}
