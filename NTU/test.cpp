#include<bits/stdc++.h>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);
// #endif
   int n; 
   cin >> n;
   long long arr[n];
   for (int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   for (int i = 0; i < n; i++)
   {
       string temp = to_string(arr[i]);
        long long first = 0;
       long long last = temp.length();
       bool show = true;
       while (first != last)
       {
        if(temp[first] != temp[last -1 ]){
            cout << arr[i];
            show = false;
            break;
        }
        first++;
        last--;
       }
       if(show || (arr[i] < 10 && arr[i] >= 0)){
           cout << arr[i] << " ";
       }
   }
   return 0;
}