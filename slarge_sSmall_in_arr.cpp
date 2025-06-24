#include<bits/stdc++.h>
using namespace std;

void sLarge(vector<int> arr)
{
    
    int n=arr.size();
    if(n>2){
        int maxi=0;
        int mini=INT_MAX;
        int smaxi=INT_MAX;
        int smini=0;
        for(int i=0;i<n;i++){
            if(mini>arr[i]){
                smini=mini;
                mini=arr[i];
            }
            if(maxi<arr[i]){
                smaxi=maxi;
                maxi=arr[i];
            }
            else if(maxi!=arr[i] && smaxi<arr[i]){
                smaxi=arr[i];
            }
            else if(mini!=arr[i] && smini>arr[i]){
                smini=arr[i];
            }
        }
        cout<<"second max element: "<<smaxi<<endl;
        cout<<"second mini element: "<<smini;
    }
    else{
        cout<<"no sufficiant elements:";
    }
}

int main(){
    
    vector<int> arr={23,5,2,4,6,6,7,8,8,20,1};
    sLarge(arr);

    return 0;
    
}
