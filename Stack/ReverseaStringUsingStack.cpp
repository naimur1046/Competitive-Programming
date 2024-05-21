#include <bits/stdc++.h>
using namespace std;
void reverseString(string str)
{
     stack<string> st;
     for (int i = 0; i < str.size(); i++)
     {
          string word = "";
          while (str[i] != ' ' && i < str.size())
          {
               word += str[i];
               i++;
          }
          st.push(word);
     }
     while (!st.empty())
     {
          cout << st.top() << endl;
          st.pop();
     }
}
int main()
{
     string str = "Hey, what are you doing?";
     reverseString(str);
}
