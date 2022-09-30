#include<bits/stdc++.h>
using namespace std;

int best(vector<int> price){
  int b = 0;
  int s = 1;
  int p = 0;

  while (s < price.size())
  {
    if(price[s] > price[b]){
      p = max(p, price[s]-price[b]);
      s++;
    }else{
      b = s;
      s = b + 1;
    }
  }
  return p;
}