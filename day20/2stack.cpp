#include<bits/stdc++.h>//https://leetcode.com/problems/valid-parentheses/submissions/2173123664/
using namespace std;
#include<stack>
#define ll long long
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(ll i =0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')'||s[i]==']'||s[i]=='}'){
                if((s[i]==')'&&st.top()=='(')
                ||(s[i]==']'&&st.top()=='[')||
                (s[i]=='}'&&st.top()=='{')
                ){
                    st.pop();
                }
                else return false;
            }
            else return false;
        }
        return true;
    }
};