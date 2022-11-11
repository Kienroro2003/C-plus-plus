#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
   freopen ("input.txt", "r", stdin);
   freopen ("output.txt", "w", stdout);
#endif
   long long total , totalFoot;
   cin >> total >> totalFoot;
   // if(totalFoot % 2 == 1){
   //     cout << -1;
   //     return 0;
   // }
   long long temp = (4 * total - totalFoot) / 2;
   if(temp >= total){
      cout << -1;
   }else{
      cout << temp << " " << total - temp;
   }

   return 0;
}