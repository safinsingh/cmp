#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a,b;cin>>a>>b;
  int n[a];
  for(int i = 0; i < a; i++) {
    cin >> n[i];
  }
  int lcount = 0;
  for(int i = 0; i < a; i++) {
    if(n[i] > b) {
      break;
    } else {
      lcount++;
    }
  }
  int rcount = 0;
  for(int i = 1; i <= a; i++){
    if(n[a-i] > b) {
      break;
    } else {
      rcount++;
    }
  }
  cout << min(a, lcount + rcount);
}
