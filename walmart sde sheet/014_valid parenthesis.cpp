//this question uses stack
#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
bool isValid(string s) {
        stack<char> t;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                t.push(s[i]);
            }
            else if(s[i] == ')')
             {
                if(i == 0 ||  t.empty() || t.top() != '(')
                {
                    return false;
                }
                t.pop();
            }
            else if(s[i] == ']')
            {

                if(i == 0 || t.empty() || t.top() != '[')
                {
                    return false;
                  }
                t.pop();
            }
            else if(s[i] == '}')
            {
                if(i == 0 || t.empty() || t.top() != '{')
                {
                    return false;
                }
                t.pop();
            }
        }
        return t.empty();
    }
    int main ()
    {
        string s;
        cin>>s;
       int ans= isValid(s);
        if(ans)
        {
            cout<<"True";
        }
        else
        {
            cout<<"false";
        }
        return 0;
    }
