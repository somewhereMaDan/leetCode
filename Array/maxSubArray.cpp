#include<iostream>
using namespace std;

// int main(int argc, char const *argv[])
// {
//   int a = 10;
//   int b = 20;

//   a = a+b;
//   b = a-b;
//   a = a-b;

//   cout << a << " " << b;
//   return 0;
// }


#include<vector>
using namespace std;

// learn how to use Vector
long long maxSubArray(int nums[],int n){
  int Sum = 0;
  int maxi = INT32_MIN;
  for (int i = 0; i < n; i++)
  {
    Sum += nums[i];
    maxi = max(Sum,maxi);
    if(Sum < 0) Sum = 0;
  }
  return maxi;
}
int main(int argc, char const *argv[])
{
  int n = 9;
  int nums[n] = {-2,1,-3,4,-1,2,1,-5,4};
  cout << "The Sum of the maximum SubArray is: " << maxSubArray(nums,n) << endl;
  return 0;
}
