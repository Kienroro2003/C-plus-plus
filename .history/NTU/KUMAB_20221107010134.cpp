#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
   freopen ("input.txt", "r", stdin);
   freopen ("output.txt", "w", stdout);
#endif
   int a,b,c,d;
   cin >> a;
   int b = a / 10;
   do{
       c = a + 3 * b;
       d = b;
       b = c / 10;
   } while (d != b);
   cout << 
   return 0;
}