#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
 
  string s;
  cin >> s;
 
  string j;
  for (auto c : s)
  {
    char l = tolower(c);
    if (!(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'y'))
    {
      j += ".";
      j += l;
    }
  }
  cout << j;
}