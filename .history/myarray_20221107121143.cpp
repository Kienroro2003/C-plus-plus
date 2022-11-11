#include<bits/stdc++.h>
using namespace std;

#define maxlength 1000;
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
        for (q= L.last;)
    }
}

