#include <bits/stdc++.h>
using namespace std;

bool valid_parenthasis(string s){
    stack <int> st;
    for(int i=0; i <s.length() ; i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return false;
            char c = st.top();
            st.pop();
            if((s[i] == ')' && c =='(') || (s[i] == '[' && c ==']')||(s[i] == '{' && c =='}')){
                continue;
            }else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    return 0;
}