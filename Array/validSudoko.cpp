#include<bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board){
  set<string>s;

  for (int i = 0; i < board.size(); i++)
  {
    for (int j = 0; i < board[0].size(); i++)
    {
      if(board[i][j] != '.'){
        string t1 = "row" + to_string(i) + board[i][j];
        string t2 = "colm" + to_string(j) + board[i][j];
        string t3 = "box" + to_string((i/3)*3 + (j/3)) + board[i][j];

        // if the value doesn't get find in the set it will assign it
        // but three of these values should't be in the set or else if any one of them is in the set it will return false
        
        if((s.find(t1) == s.end()) && (s.find(t2) == s.end()) && (s.find(t3) == s.end())){
          s.insert(t1);
          s.insert(t2);
          s.insert(t3);
        }else{
          return false;
        }
      }
    }
  }
  return true;
}

//                                    JAVA -> 

// public boolean isValidSudoku(char[][] board) {
//         HashSet seen = new HashSet();
        
//         for(int i = 0; i < 9; i++){
//             for(int j = 0; j < 9; j++){
//                 if(board[i][j] != '.'){
//                     if((!seen.add("row" + i + board[i][j])) || (!seen.add("colm" + j + board[i][j]))){
//                         return false;
//                     }
//                     if(!seen.add("box" + (i/3)*3 + (j/3) + board[i][j])){
//                         return false;
//                     }
//                 }
//             }
//         }
//         return true;
//     }