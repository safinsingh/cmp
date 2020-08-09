#include <bits/stdc++.h>
using namespace std;
 
#define IN_VEC(v, i) find(v.begin(), v.end(), i) != v.end()
#define IN_VEC_NOT(v, i) find(v.begin(), v.end(), i) == v.end()
#define PB(v, e) v.push_back(e)
#define ITER(i) while (i--)
#define ENDL() cout << "\n";
#define INT_INPUT(e) \
  int e;             \
  cin >> e
#define OPTIMIZE()             \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);
#define COUT_VEC(v)                  \
  for (int i = 0; i < v.size(); i++) \
  {                                  \
    cout << v[i] << ' ';             \
  }
#define VEC_INT(v) vector<int> v
#define ITER_VEC(v) for (int i = 0; i < v.size(); i++)
#define MIN_VEC(v) *min_element(v.begin(), v.end())
#define FOR(z) for (int i = 0; i < z; i++)
#define VEC_SUM(v) accumulate(v.begin(), v.end(), 0)
 
typedef long long ll;
 
int main()
{
  OPTIMIZE();
  INT_INPUT(n);
  ITER(n)
  {
    INT_INPUT(l);
    int x = l;
    VEC_INT(cv);
    VEC_INT(ov);
    FOR(l)
    {
      INT_INPUT(c);
      PB(cv, c);
    }
    FOR(l)
    {
      INT_INPUT(o);
      PB(ov, o);
    }
    int mc = MIN_VEC(cv);
    int mo = MIN_VEC(ov);
    ll c = 0;
    while (VEC_SUM(cv) != mc * l || VEC_SUM(ov) != mo * l)
    {
      FOR(l)
      {
        int ca = cv[i];
        int oa = ov[i];
        if (ca > mc && oa > mo)
        {
          cv[i] -= min(ca - mc, oa - mo);
          ov[i] -= min(ca - mc, oa - mo);
          c += min(ca - mc, oa - mo);
        }
        if (ca == mc && oa > mo)
        {
          ov[i] -= oa - mo;
          c += oa - mo;
        }
        if (oa == mo && ca > mc)
        {
          cv[i] -= ca - mc;
          c += ca - mc;
        }
      }
    }
    cout << c << "\n";
  }
}