#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;cin>>n;
  string g;
  for(int z=0;z<n;z++){
    int i=0, j=0;
    string s;cin>>s;
    if(z==0)g=s;
    else {
    	while(i < g.length() && j < s.length()){
        if(g[i]!=s[j])break;
        i++;j++;
      }
      g=s.substr(0,i);
    }
  }
  cout<<g.length();
}