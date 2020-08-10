#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a;
  string s,t;
  cin>>a>>s>>t;
  if(t=="week"&&6>=a&&a>=5)cout<<53;
  else if(t=="week")cout<<52;
  else if(a>=31)cout<<7;
  else if(a>=30)cout<<11;
  else cout<<12;
}
