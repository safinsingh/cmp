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
  int s = 0;
  while (n--)
  {
    int j, k, l;
    cin >> j >> k >> l;
    if (j + k + l >= 2)
      s++;
  }
  cout << s;
}
