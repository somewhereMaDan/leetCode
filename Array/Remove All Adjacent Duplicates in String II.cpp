#include<bits/stdc++.h>
using namespace std;

string getReduced(string s, int k){
  // s is string 
  // k is no. of frequency of elements you want to delete

  string output = "";
  if(k == 1){
    return "";
  }

  stack<pair<char, int>> stk;

  for (int i = 0; i < s.length(); i++)
  {
    if(stk.empty() == true){
      stk.push(make_pair(s[i],1));
    }else{
      if(s[i] == (stk.top()).first){
        pair<char, int> P = stk.top();
        stk.pop();
        P.second++;

        if(P.second == k){
          continue; // this continue will get pair out of the stack
        }else{
          stk.push(P);
        }
      }
      else{
        stk.push(make_pair(s[i],1));
      }
    }
  }

  while (!stk.empty())
  {
    pair<char, int> P = stk.top();
    while (P.second != 0)
    {
      output += stk.top().first;
      P.second--;
    }
    stk.pop();
  }

  reverse(output.begin(),output.end());
  return output;
}

int main(int argc, char const *argv[])
{
  int k;
  string s;
  cout << "input a string: " << endl;
  cin >> s;

  cout << "input no. of frequency of element you want to delete: " << endl;
  cin >> k;

  string result = getReduced(s,k);
  cout << "After deleting adjacent char's from string: " << result << endl;
  return 0;
}
