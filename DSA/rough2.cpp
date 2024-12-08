#include <bits/stdc++.h>
using namespace std;
int prec(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}
string infixtopostfix(string s){
    stack <char> st;
    string ans="";
    int i=0;
    for (int i = 0; i < s.size(); i++)
    {
        char c=s[i];
        if(isalpha(c)){
            ans.push_back(c);
        }
        else if(c=='('){
            st.push(c);
        }
        else if(c==')'){
            while(!st.empty() and st.top()!='('){
                ans.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() and prec(s[i])<prec(st.top())){
                ans.push_back(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
}
string prefixtoinfix(string s){
    stack <string> st;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        // string stri=to_string(s[i]);
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
            st.push(string(1,c));
        }
        else{
            string first=st.top();
            st.pop();
            string second=st.top();
            st.pop();
            string  a="("+second+c+first+")";
            st.push(a);
        }
    }
    return st.top();
}
string infixtoprefix(string s){
    stack <char> st;
    string ans="";
    int i=0;
    for (int i = 0; i < s.size(); i++)
    {
        char c=s[i];
        if(isalpha(c)){
            ans.push_back(c);
        }
        else if(c=='('){
            st.push(c);
        }
        else if(c==')'){
            while(!st.empty() and st.top()!='('){
                ans.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() and prec(s[i])<prec(st.top())){
                ans.push_back(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

string postfixtoprefix(string s){
    stack <string> st;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(c>='A' && c<='Z'){
            st.push(string(1,c));
        }
        else {
            string first=st.top();
            st.pop();
            string second=st.top();
            st.pop();
            string  a=c+second+first;
            st.push(a);
        }
    }
    return st.top();
}
string prefixtopostfix(string s){
    stack <string> st;
    for(int i=s.size()-1;i>=0;i--){
        char c=s[i];
        if(c>='A' && c<='Z'){
            st.push(string(1,c));
        }
        else {
            string first=st.top();
            st.pop();
            string second=st.top();
            st.pop();
            string  a=c+second+first;
            st.push(a);
        }
    }
    string ans=st.top();
    reverse(ans.begin(),ans.end());
    return ans;
}
int fn(int nums1,int nums2,char c){
    if(c=='+') return nums1+nums2;
    if(c=='-') return nums2-nums1;
    if(c=='/') return nums2/nums1;
    if(c=='*') return nums2*nums1;
    return nums2^nums1;
}
int evalution(string s){
    stack <char> op;
    stack <int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else if(s[i]=='(') op.push(s[i]);
        else if(s[i]==')'){
            while(!op.empty() && op.top()!='('){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                st.push(fn(num2,num1,s[i]));
                op.pop();
            }
            op.pop();
        }
        else{
            while(!op.empty() && prec(s[i])<=prec(op.top())){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                st.push(fn(num2,num1,op.top()));
                op.pop();
            }
            op.push(s[i]);
        }
    }
    while(!op.empty()){
        int num1=st.top();
        st.pop();
        int num2=st.top();
        st.pop();
        st.push(fn(num2,num1,op.top()));
        op.pop();
    }
    return st.top();
}
int main(){
    string s="((9-5)/2)";
    // reverse(s.begin(),s.end());
    // for(int i=0;i<s.size();i++){
    //     if(s[i]==')') s[i]='(';
    //     else if(s[i]=='(') s[i]=')';
    // }
    int ans=evalution(s);
    // reverse(ans.begin(),ans.end());
    cout<<ans;
}