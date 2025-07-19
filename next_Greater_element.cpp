#include<bits/stdc++.h>
using namespace std;
vector<int> nGe(vector<int> arr,int n){
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        if(st.size()==0){
            st.push(i);
        }
        else{
            if(arr[st.top()]>=arr[i]){
                st.push(i);
            }
            else{
                ans[st.top()]=arr[i];
                st.pop();
                i--;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> arr{6, 8, 0, 1, 3};
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> ans=nGe(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
