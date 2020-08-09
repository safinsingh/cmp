#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a;cin>>a;
  int c=0;
  while(a--){
    string s;cin>>s;
    if(s=="++X"||s=="X++")c++;
    else if(s=="--X"||s=="X--")c--;
  }
  cout<<c;
}
