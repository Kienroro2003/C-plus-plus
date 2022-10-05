#include<bits/stdc++.h>

#define llmax LLONG_MAX;
using namespace std;


int testRecursive(int n){
	if(n == 0) return 3;
	else return 2 * testRecursive(n - 1) + 3;
}

int main(){
	cout << testRecursive(3);
	return 0;
}
