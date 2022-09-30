#include<iostream>
#include<map>
using namespace std;

bool check(int arr[],int n){
  map<int,int>m;
  for (int i = 0; i < n; i++)
  {
    if(m[arr[n]]){
      return true;
    }else{
      m[arr[n]] = 1;
    }
  }
  return false;
}

int main(int argc, char const *argv[])
{
  int n = 4;
  int arr[n] = {1,2,3,1};
  if(check(arr,n) == true){
    cout << "True" << endl;
  }else{
    cout << "False" << endl;
  }
  return 0;
}
