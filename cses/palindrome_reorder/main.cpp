#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  string s;
  cin >> s;
  map<char, int> m;
  for (int i = 0; i < s.length(); i++)
  {
    m[s[i]]++;
  }
  int c;
  char z = ' ';
  for (auto i : m)
  {
    if (i.second % 2 == 1)
    {
      c++;
      z = i.first;
    }
  }
  if (((s.length() % 2 == 1) && (z % 2 != 1)) && ((s.length() % 2 == 0) && (z % 2 != 0)))
  {
    cout << "NO SOLUTION";
    return 0;
  }
  for (auto u : m)
  {
    if (u.first != z && z != ' ')
    {
      if (u.second < 2)
      {
        cout << "NO SOLUTION";
        return 0;
      }
    }
  }
  string f = "", l = "";
  for (auto u : m)
  {
    if (u.second % 2 != 0 && s.length() % 2 == 0)
    {
      cout << "NO SOLUTION";
      return 0;
    }
    f += string(u.second / 2, u.first);
    l = string(u.second / 2, u.first) + l;
  }
  cout << f << ((s.length() % 2 == 1) ? (z + l) : (l));
}