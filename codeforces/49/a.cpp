#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <bits/stdc++.h>
#define COUT_VEC(v)                  \
  for (int i = 0; i < v.size(); i++) \
  {                                  \
    cout << v[i] << ' ';             \
  }
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  string s;
  cin >> s;
  int z;
  cin >> z;
  vector<string> v;
  while (z--)
  {
    string e;
    cin >> e;
    v.push_back(e);
  }
  vector<string> g;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i].rfind(s, 0) == 0)
    {
      g.push_back(v[i]);
    }
  }
  if (g.size() >= 1)
  {
    cout << *min_element(g.begin(), g.end());
  }
  else
  {
    cout << s;
  }
}