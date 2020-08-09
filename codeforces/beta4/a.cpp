#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed;

  int n;
  cin >> n;

  if (n % 2 == 0 && n > 2)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
}