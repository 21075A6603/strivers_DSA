#include<bits/stdc++.h>
using namespace std;
//-----------------first method using iteration method:------------------------------
void binSearch(vector<int> &arr,int n,int p){
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(p==arr[mid]){
            cout<<"got it at: "<<mid;
            return;
        }
        else if(p<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"not found";
}
// ------------------------ using recursion method:----------------------------
int search(vector<int> &arr,int low,int high,int target){
    if(low>high){
        return 0;
    }
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) {
        return search(arr,mid+1,high,target);
    }
    return search(arr,low,mid-1,target);   
}
int bSearch(vector<int> &arr,int n,int target){
    return search(arr,0,n,target);
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,8,9,12,234,456};
    int n=size(arr);
    int x=234;
    cout<<"first method lloping one:"<<endl;
    binSearch(arr,n-1,x);
    
    cout<<endl;
    cout<<"2nd method recurtion one:"<<endl;
    int flag=bSearch(arr,n-1,x);
    if(flag!=0){
        cout<<"targate found at: "<<flag;
    }
    else{
        cout<<"target not found";
    }
    return 0;
}
