#include<iostream>
using namespace std;

int findSolution(int A[], int N){
  int max,min;
  // for(int i = 0; i < N-1; i++){
  //   for(int j = i; j < N; j++){
  //     if(A[i]>A[j]){
  //       max = A[i];
  //   	}
  //     if(A[i]<A[j]){
  //       min = A[i];
  //   	}
  //   }
  // }

  for (int i = 1; i < N; i++)
  {
    int key = A[i];
    int j = i - 1;

    while (j >= 0 && key < A[j])
    {
      A[j+1] = A[j];
      j = j - 1;
    }
    A[j+1] = key;
  }
  
  min = A[0];
  max = A[N-1];
  
  int Sum = min + max;
  return(Sum);
}

// The solution below will have O(n) time complexity... 

// int findSum(int A[], int N)
//     {
//         int min,max;
//         if(N == 1){
//             max = A[0];
//             min = A[0];
//         }else{
//             if(A[0]>A[1]){
//                 max = A[0];
//                 min = A[1];
//             }else{
//                 if(A[0]<A[1]){
//                     max = A[1];
//                     min = A[0];
//                 }
//             }
//             for(int i = 2; i < N; i++){
//                 if(A[i]>max){
//                     max = A[i];
//                 }
//                 if(A[i]<min){
//                     min = A[i];
//                 }
//             }
//         }
//         int Sum = min + max;
//         return(Sum);
//     }

int main(int argc, char const *argv[])
{
  int N = 5;
  int A[N] = {-2,-1,-4,7,3};

  cout << findSolution(A,N) << endl;
  return 0;
}
