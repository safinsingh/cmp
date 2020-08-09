#include <iostream>
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed;
 
  int n, m, a;
  cin >> n >> m >> a;
  long long ans = 1;
  ans *= (n % a == 0) ? n / a : n / a + 1;
  ans *= (m % a == 0) ? m / a : m / a + 1;
  cout << ans;
}
