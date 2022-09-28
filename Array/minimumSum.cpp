#include <bits/stdc++.h>
using namespace std;

int minSum(vector<int> num, int k)
{

  while (k > 0)
  {
    sort(num.begin(), num.end(), greater <>());

    // priority_queue<int> pq;
    // int n = num.size();
    // for (int i = 0; i < n; i++)
    // {
    //   pq.push(num[i]);
    // }

    // while (!pq.empty())
    // {
    //   num[n] = pq.top();
    //   pq.pop();
    //   n--;
    // }
    
    int get = abs(num.front() / 2);
    num.front() = get;
    k--;
  }

  int min = 0;
  for (int i = 0; i < num.size(); i++)
  {
    min = min + num[i];
  }
  return min;
}

int main(int argc, char const *argv[])
{
  int k;
  cout << "Enter the no. of moves: " << endl;
  cin >> k;
  vector<int> num;

  num.push_back(7);
  num.push_back(20);
  num.push_back(10);

  int result = minSum(num, k);
  cout << result << endl;
  return 0;
}

// int main(int argc, char const *argv[])
// {
//   int n, k;
//   cout << "enter the size of the array: " << endl;
//   cin >> n;
//   int arr[n];

//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   cout << "How many move is possible: " << endl;
//   cin >> k;

//   for (int i = 0; i < n; i++)
//   {

//   }

//   return 0;
// }
