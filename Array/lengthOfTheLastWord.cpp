#include<bits/stdc++.h>
using namespace std;

int LastSLength(string s){
  reverse(s.begin(), s.end());
  int count = 0;
  bool stop = false;

  for (int i = 0; i < s.size(); i++)
  {
    if(s[i] == ' ' && stop == true){
      break;
    }
    
    if(s[i] == ' ' && stop == false){
      continue;
    }else{
      count++;
      stop = true;
    }
  }
  return count;
}

int main(int argc, char const *argv[])
{
  string s = " hello World  ";
  int get = LastSLength(s);
  cout << "Length of the last word in the string: " << get;
  return 0;
}
