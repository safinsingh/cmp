#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
#include <iostream>
#include <string>
using namespace std;

int longest_common_prefix_len(string g, string s) {
  for(int z=0;z<n;z++){
    int i=0, j=0;
    if(z==0)g=s;
    else {
    	while(i < g.length() && j < s.length()){
        if(g[i]!=s[j])break;
        i++;j++;
      }
      g=s.substr(0,i);
    }
  }
  return g.length();
}

int longest_common_prefix(string g, string s) {
  for(int z=0;z<n;z++){
    int i=0, j=0;
    if(z==0)g=s;
    else {
    	while(i < g.length() && j < s.length()){
        if(g[i]!=s[j])break;
        i++;j++;
      }
      g=s.substr(0,i);
    }
  }
  return g;
}