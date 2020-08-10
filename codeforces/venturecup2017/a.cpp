#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n) { 
  if (n<=1)return false; 
    for (int i = 2; i < n; i++) 
      if (n % i == 0) 
        return false; 
    return true; 
} 

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;cin>>n;
  if(n==1)cout<<3;
  else if(n%2==1)cout<<1;
  else{
    bool t=false;
    int z=1;
    while(!t){
      int a=n*z+1;
      if(!isPrime(a)){
        t=true;
        cout<<z;
        return 0;
      }
      else z++;
    }
  }
}
