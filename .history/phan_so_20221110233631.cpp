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

ostream &operator >> (ostream & os, PS p){
    cout << "Enter "
    return p;
}
