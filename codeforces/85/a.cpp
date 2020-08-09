#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <iostream>
#include<bits/stdc++.h> 

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s,j;
  cin>>s>>j;
  transform(s.begin(), s.end(), s.begin(), ::tolower); 
  transform(j.begin(), j.end(), j.begin(), ::tolower); 
  if(s>j)cout<<1;
  else if(j>s)cout<<-1;
  else cout<<0;
}
