#include <bits/stdc++.h>
using namespace std;
 
#define IN_VEC(v, i) find(v.begin(), v.end(), i) != v.end()
#define IN_VEC_NOT(v, i) find(v.begin(), v.end(), i) == v.end()
#define PB(v, e) v.push_back(e)
#define ITER(i) while (i--)
#define NEWLINE() cout << "\n";
#define INT_INPUT(e) \
  int e;             \
  cin >> e;
 
typedef long long ll;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  int n;
  cin >> n;
  ITER(n)
  {
    vector<int> v;
    INT_INPUT(l);
    l *= 2;
    ITER(l)
    {
      INT_INPUT(x);
      if (IN_VEC_NOT(v, x))
      {
        PB(v, x);
        cout << x << " ";
      }
    }
    NEWLINE();
  }
}