//first non reapeating character,input is in form of string ,so return the index if we find the character
//else return -1
//input: "leetcode"
//output: 0

#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int first_unique_string(string s)
{
     unordered_map<char,int>m;
     for(int i =0;i<s.length();i++)
     {
         m[s[i]]++;
     }
     for(int i =0;i<s.length();i++)
     {
         if(m[s[i]]==1)
         {
             cout<< i;
         }
         else{

            return -1;
         }
     }

}
int main ()
{

    string s;
    cin>>s;
    first_unique_string(s);

    return 0;
}
