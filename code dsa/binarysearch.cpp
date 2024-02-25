#include<iostream>
#include<vector>
using namespace std;

 
int binarysearch(int arr[],int n, int target) {
    int start=0;
    int end=n;
    while(start<=end){
        int mid= start + (end-start)/2;
        if(arr[mid]== target){
            return mid;

        }
        else if(arr[mid]< target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}    

int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int target;
    cin>>target;
    cout<<binarysearch(arr,n,target)<<endl;
    return 0;



}
    
