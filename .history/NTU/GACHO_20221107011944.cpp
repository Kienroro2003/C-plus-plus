#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
#ifndef ONLINE_JUDGE
   freopen ("input.txt", "r", stdin);
   freopen ("output.txt", "w", stdout);
#endif
   ll total , totalFoot;
   cin >> total >> totalFoot;
   // if(totalFoot % 2 == 1){
   //     cout << -1;
   //     return 0;
   // }
   ll temp = (4 * total - totalFoot) / 2;
   if(temp > total){
      cout << -1;
   }else{
      cout << temp << " " << total - temp;
   }

   return 0;
}