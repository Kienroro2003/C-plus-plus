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
      if(arr[i] == 100){
         odd++;
      }else{
         even++;
      }
   }
   if(even % 2 == 1 && odd %2 == 0)

   return 0;
}