#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
typedef long long ll;
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  ll n, k;
  cin >> n >> k;
  ll a[k];
  for (ll i = 0; i < k; i++)
  {
    ll e;
    cin >> e;
    a[i] = e;
  }
  map<ll, ll> m;
  for (ll j = 0; j < k; j++)
  {
    m[a[j]] = n % a[j];
  }
  ll s = -1;
  for (auto [k, v] : m)
  {
    if (s == -1)
    {
      s = k;
    }
    else if (v < m[s])
    {
      s = k;
    }
  }
  ll i;
  for (ll e = 0; e < k; e++)
  {
    if (a[e] == s)
    {
      i = e + 1;
    }
  }
  cout << i << " " << n / s;
}
