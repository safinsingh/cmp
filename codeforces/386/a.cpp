#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a,b,c;cin>>a>>b>>c;
  cout<<min(min(c/4,b/2),a)*7;
}
