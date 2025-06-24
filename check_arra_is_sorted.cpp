#include<bits/stdc++.h>
using namespace std;
// cheking the array is sorted or not:
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int n=size(arr);
    cout<<"Size: "<<9<<endl;
    int flag=0;
    for(int i=1;i<n-1;i++){
        if(arr[i]<=arr[i-1]){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"not a sorted array";
    }
    else{
        cout<<"sorted array";
    }
    return 0;
}

