#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;cin>>n;
  cout<<((n%2)?"contest":"home");
}