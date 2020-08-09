#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed;
 
  int n;
  cin >> n;
  while (n--)
  {
    string i;
    cin >> i;
    if (i.length() > 10)
    {
      cout << i[0] << i.length() - 2 << i[i.length() - 1] << "\n";
    }
    else
    {
      cout << i << "\n";
    }
  }
}