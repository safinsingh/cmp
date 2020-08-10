#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  for(int i=1;i<=5;++i){
    for(int j=1;j<=5;++j){
      int s;cin>>s;
      if(s==1)cout<<abs(3-i)+abs(3-j);
    }
  }
}
