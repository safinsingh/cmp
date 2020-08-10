#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;cin>>s;
  cout<<s;
  reverse(s.begin(),s.end());
  cout<<s;
}
