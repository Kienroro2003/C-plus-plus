#include<bits/stdc++.h>
using namespace std;

#define maxlength 1000
typedef int element_type;
typedef struct LIST{
    element_type elements[maxlength];
    int last;
} list_style;

void insert(element_type x, int p, LIST L){
    if(L.last >= maxlength){
        cout << "List is full";
    }else if(p > L.last + 1 || p < 1){
        cout << "Vi tri la khong ton tai";
    }else{
        int q;
        for (q = L.last; q >= p; q--){
            L.elements[q + 1] = L.elements[q];
        }
        L.last = L.last + 1;
        L.elements[p] = x;
    }
}

int main(){
    insert(10, 1, list_style);
    for (element_type i = 1; i <= 10; i++)
    {
        cout << list_style.elements[i] << " ";
    }

    return 0;
}
