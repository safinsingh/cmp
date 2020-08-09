#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;cin>>n;
  while(n--){
    int e;cin>>e;
    for(int i=0;i<e;i++)cout<<i+1<<" ";
    cout<<"\n";
  }
}