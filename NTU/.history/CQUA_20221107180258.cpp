#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
   freopen ("input.txt", "r", stdin);
   freopen ("output.txt", "w", stdout);
#endif
   int n,i;
   cin >> n;
   if(n <=1){
      cout << "NO";
      return 0;
   }
   int arr[n];
   int odd = 0;
   int even = 0;
   for (i = 0; i < n; i++)
   {
      cin >> arr[i];
      if(arr[i] == 100)
   }
   int t1 = 0, t2 = 0;
   for (i = 0; i < n; i++)
   {
      if(t1 > t2){
         t2 += arr[i];
      }else if(t1 < t2){
         t1 += arr[i];
      }else{
         t1 += arr[i];
      }
   }
   if(t1 == t2){
      cout << "YES";
   }else{
      cout << "NO";
   }

   return 0;
}