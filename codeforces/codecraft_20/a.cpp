#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;cin>>n;
  while(n--){
    int x,y;cin>>x>>y;
    int j=0;
    for(int i=0;i<x;i++){
      int z;cin>>z;j+=z;
    }
    cout<<min(j,y)<<"\n";
  }
}
