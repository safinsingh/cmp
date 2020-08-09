#include <iostream>
using namespace std;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  while (n--)
  {
    int l;
    cin >> l;
    if (l % 4 != 0)
    {
      for (int i = 0; i < l - (l / 4 + 1); ++i)
      {
        cout << 9;
      }
      for (int i = 0; i < l / 4 + 1; i++)
      {
        cout << 8;
      }
    }
    else
    {
      for (int i = 0; i < l - (l / 4 + 1) + 1; ++i)
      {
        cout << 9;
      }
      for (int i = 0; i < l / 4; i++)
      {
        cout << 8;
      }
    }
    cout << "\n";
  }
}