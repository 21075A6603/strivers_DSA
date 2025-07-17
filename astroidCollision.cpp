#include <bits/stdc++.h>
using namespace std;

vector<int> astroidColl(vector<int> &as){
    stack<int> st;
    for(int i=0;i<as.size();i++){
        if(st.size()==0){
            st.push(as[i]);
        }
        else{
            if(st.top()<0){
                if(as[i]<0){
                    st.push(as[i]);
                }
                if(as[i]>0){
                    st.push(as[i]);
                }
            }
            else if(st.top()>0){
                if(as[i]>0){
                    st.push(as[i]);
                }
                else if(abs(st.top()) > abs(as[i])){
                    // cout<<"right blasted"<<" ";
                    ;
                }
                else if(abs(st.top())==abs(as[i])){
                    // cout<<"collision"<<" ";
                    st.pop();
                }
                else if(abs(st.top())<abs(as[i])){
                    st.pop();
                    // cout<<"left blasted:"<<" ";
                    i--;
                }
            }
        }
    }
        vector<int> ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
int main(){
    
    vector<int> arr={4, 3, -2, -1, -5};
    
    int size=arr.size();
    // cout<<size;
    vector<int> ans=astroidColl(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}


// Input: [6, 7, -1, -2]
// Output: [6, 7]



// Input: [4, 3, -2, -1, -5]
// Output: [-5]






