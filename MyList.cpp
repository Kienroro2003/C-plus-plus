#include<iostream>
using namespace std;

#define maxlength 1000;
typedef int element_type;

typedef struct List{
    element_type elements[maxlength];
    int last;
};

void insert(element_type x, int index, List list){
    if(list.last > maxlength){
        cout << "List is full" << endl;
    }else if(index > list.last || index < 0){
        cout << "vi tri khong ton tai" << endl;
    }else{
        for (int i = list.last; i > index; i--){
            list.elements[i] = list.elements[i - 1];
        }
        list.elements[index] = x;
        list.last++;
    }
}

int
main()
{
    List list;
    for (int i = 0; i < 10; i++){
        insert(i + 281, i, list);
    }
    for (int i = 0; i < list.last; i++){
        cout << list.elements[i] << " ";
    }
}