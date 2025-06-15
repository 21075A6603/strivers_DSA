// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selection_Sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int mini=i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    cout<<"after selction sort:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
    void bubble_sort(int arr[],int n)
    {
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<"after bubble sort:"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
    }
    
    void insertion_Sort(int arr[],int n){
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
    cout<<"after insertion sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
int main() {
    
    int arr[]={13,46,24,52,20,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"before sorting of the array:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"calling the selction sort method:"<<endl;
    selection_Sort(arr,size);
    cout<<"end of selectino sort:"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"sorting using the bubble sort algo:"<<endl;
    bubble_sort(arr,size);
    
    
    insertion_Sort(arr,size);
    
    return 0;
}