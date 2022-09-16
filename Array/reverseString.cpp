#include<iostream>
#include<algorithm>
using namespace std;

string reverseWord(string str){
  // int n = str.length();
  // for (int i = 0; i < n/2; i++)
  // {
  //   swap(str[i],str[n - i - 1]);
  // }
  reverse(str.begin(),str.end());
  return str;
}

int main(int argc, char const *argv[])
{
  string name = "Madan"; 
  cout << reverseWord(name) << endl; 
  return 0;
}
