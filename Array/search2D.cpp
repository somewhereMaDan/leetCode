#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
  int rows = matrix.size();
  int cols = matrix[0].size();

  int i = 0, j = cols - 1;

  while (i < cols && j >= 0)
  {
    if(matrix[i][j] == target){
      return true;
    }else if(target > matrix[i][j]){
      // if the target is greater than the last element of the column of first column
      // then we'll increment the row 
      i++;
    }else{
      // if target is less than the last element of the column of the first column
      // then we'll decrement the column
      j++;
    }
  }
  return false;
}