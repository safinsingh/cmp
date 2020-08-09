#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
  int s=0;
  for (int i=1;i<=e;++i){
    if((i%a==0)||(i%b==0)||(i%c==0)||(i%d==0))s++;
  }
  cout<<s;
}
