#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  int a, b, c, d;
  cin >> a >> b >> c >> d;
 
  if (a == b + c + d || b == a + c + d || c == a + b + d || d == a + b + c || a + b == c + d || a + c == b + d || a + d == b + c)
  {
    cout << "YES"
         << "\n";
  }
  else
  {
    cout << "NO"
         << "\n";
  }
}