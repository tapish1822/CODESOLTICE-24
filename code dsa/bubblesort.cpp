#include<iostream>
using namespace std;

int main(){
    int n;
    int swap;
    int arr[]={8,5,3,6,10};
    
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[],arr[j+1]);
                swapped=true;
            }

        }
        if(swapped==false)
        break;
    }
}