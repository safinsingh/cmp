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
  for (int i = 0; i < n; i++)
  {
    int e;
    cin >> e;
    cout << ((e % 2 == 0) ? ((e + 2) / 2) : ((e + 1) / 2)) << "\n";
  }
}