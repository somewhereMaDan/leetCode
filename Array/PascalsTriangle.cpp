#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triangle(int numRows){
  vector<vector<int>> ans;

  if(numRows == 0) return ans;

  for (int i = 0; i < numRows; i++)
  {
    vector<int> row(i+1,1);
    // size if vector row is (i+1) and the initial value that is going to be stored in ans is 1
    for (int j = 1; j < i; j++)
    {
      row[j] = ans[i-1][j] + ans[i-1][j-1];
    }
    ans.push_back(row);
  }
  return ans;
}