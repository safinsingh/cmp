#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
 
  int a,b;cin>>a>>b;
  int z[a];
  for(int i=0;i<a;i++)cin>>z[i];
  map<int,int> m;
  for(int i=0;i<a;i++)m[z[i]]++;
  int x=0;
  for(auto [k,v]:m){
    int g=b*((v+b-1)/b);x=(x>g)?x:g;
  }
  int ans=0;
  for(auto [k,v]:m)ans+=(x-v);
  cout<<ans;
}