#include<bits/stdc++.h>
using namespace std;
void pointerApp(int arr[],int n){
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[j]!=arr[i]){
            j++;
            arr[j]=arr[i];
        }
    }
    cout<<"finel array:"<<endl;
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int j=0;
    for(auto x:s){
        arr[j]=x;
        j++;
    }
    s={};
    cout<<"sise of the array:"<<j<<endl;
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"using two pointer approach:"<<endl;
    pointerApp(arr,n);
    
    return 0;
}

sise of the array:3
1 2 3 

using two pointer approach:
finel array:
1 2 3 
