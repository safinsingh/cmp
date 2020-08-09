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
  pair<int, int> j[n];
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    j[i] = make_pair(a, b);
  }
  int g = 0;
  for (int i = 0; i < n; i++)
  {
    for (int z = 0; z < n; z++)
    {
      if (j[i].first == j[z].second)
      {
        g++;
      }
    }
  }
  cout << g;
}