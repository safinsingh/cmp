#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
 
  int n, j;
  cin >> n >> j;
  int m;
  int s = 0;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    int z;
    cin >> z;
    a[i] = z;
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0 && a[i] >= a[j - 1])
    {
      s++;
    }
  }
  cout << s;
}