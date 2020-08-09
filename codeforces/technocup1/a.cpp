#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  int n;
  cin >> n;
 
  int m = 0;
  while (n--)
  {
    int a;
    cin >> a;
    m = max(m, a);
  }
  cout << (m > 0 ? "HARD" : "EASY");
  return 0;
}