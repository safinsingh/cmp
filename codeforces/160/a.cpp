#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n,k;cin>>n>>k;
  int c=0;
  while(n--){
    string s;cin>>s;
    int z=0;
    for (auto c:s){
      if (c=='4'||c=='7')z++;
    }
    if(z<=k)c++;
  }
  cout<<c;
}