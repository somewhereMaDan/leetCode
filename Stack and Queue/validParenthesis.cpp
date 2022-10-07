#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
   stack<char> st;

   for (int i = 0; i < s.size(); i++)
   {
      if (s[i] == '(' || s[i] == '{' || s[i] == '[')
      {
         st.push(s[i]);
      }
      else
      {
         if (st.empty())
         {
            return false;
         }
         char c = st.top();
         st.pop();
         if ((s[i] == ')' && c == '(') || (s[i] == '}' && c == '{') || (s[i] == ']' && c == '['))
         {
            continue;
         }
         else
         {
            return false;
         }
      }
   }
   if (st.empty())
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main(int argc, char const *argv[])
{
   string s = "()";

   if (isValid(s) == true)
   {
      cout << "true";
   }
   else
   {
      cout << "false";
   }

   return 0;
}
