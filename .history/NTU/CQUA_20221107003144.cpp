#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
   freopen ("input.txt", "r", stdin);
   freopen ("output.txt", "w", stdout);
#endif
   int n;
   cin >> n;
   int arr[n];
   int t1 = 0, t2 = 0;
   for (int i = 0; i < n; i++)
   {
      if(t1 > t2){
         t2 += arr[i];
      }else if(t1 < t2){
         t1 += arr[i];
      }else{
         
      }
   }
   
   return 0;
}