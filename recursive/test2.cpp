#include<bits/stdc++.h>
using namespace std;
#define llmax LLONG_MAX;

//int arr[] = {5,2,4,7,1,3,2,6};
//int n = 7;

int arr[]= {4,7,2,6,1,4,7,3,5,2,6};
int n = 10;

void display(int *arr, int n){
	for(int i = 0; i <= n ; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void merge(int *arr, int l, int m, int r){
	cout << "l: " << l << ", m: " << m << ", r: " << r << endl;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1 + 1];
	int R[n2  + 1];
	int i, j;
	cout << "Duyet mang L: ";
	int temp = l;
	for(i = 0; i < n1; i++){
		L[i] = arr[temp++];
		cout << L[i] << " ";
	}
	cout << endl;
	L[i] = INT_MAX;
	i = n1;
	cout << "Duyet mang R: ";
	for(j = 0 ; j < n2; j++){
		R[j] = arr[temp++];
		cout << R[j] << " " ;
	}
	cout << endl;
	R[j] = INT_MAX;
	i = 0, j = 0;
	for(int k = l; k <= r; k++){
		cout << endl;
		cout << L[i] << " " << R[j] << endl;
		if(L[i] <= R[j]){
			arr[k] = L[i++]; 
		}else{
			arr[k] = R[j++];
		}
		cout << arr[k] << " ";
	}
	cout << endl;
//	display(arr,r);

}

void merge_sort(int *arr, int l, int r){
	if(l < r){
		int m = (r + l) / 2;
		merge_sort(arr, l, m);
		merge_sort(arr, m + 1, r);
		merge(arr,l,m,r);
	}
}





int main(){
	merge_sort(arr,0 , n); 
	display(arr, n);
	return 0;
}
