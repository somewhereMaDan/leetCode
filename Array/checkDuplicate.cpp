#include<iostream>
#include<map>
using namespace std;

bool check(int nums[], int n){
  map<int,int>m;
  
  for (int i = 0; i < n; i++)
  {
    if(m[nums[i]]){
      return true;
    }m[nums[i]] = 1; 
  }
  return false;
}

int main(int argc, char const *argv[])
{
  int n = 5;
  int nums[n] = {2,14,18,22,22};

  if(check(nums,n) == true){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
  return 0;
}
