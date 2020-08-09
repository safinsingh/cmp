#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int k;cin>>k;
  while(k--){
    int c=0;
    int n,m; cin>>n>>m;
    for(int i=0;i<n;i++) {
      string s; cin>>s;
      if (i!=n-1) {
        if(s[m-1]=='C')continue;
        else if(s[m-1]!='D')c++;
      } else {
        for (auto z:s) {
          if(z=='C')continue;
          else if(z!='R')c++;
        }
      }
    }
    cout<<c<<"\n";
  }
}