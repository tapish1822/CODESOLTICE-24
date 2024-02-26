#include<iostream>
using namespace std;

void merge(int *arr,int start, int end){
    //mid vlaue 

    int mid =(start+end)/2;


    int length1= mid-start+1;
    int length2= end-mid;

    int *first = new int[length1];
    int *second = new int[length2];

    int mainArrayIndex= start;
    for(int i=0;i<length1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0;i<length2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    int index1=0;
    int index2=0;
    mainArrayIndex= start;

    while(index1<length1 && index2<length2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    while(index1<length1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<length2){
        arr[mainArrayIndex++]=second[index2++];
    }
    delete[]first;
    delete[]second;


}

void mergeSort(int *arr ,int start, int end){

    if(start>=end){
        return;
    }
    int mid = (start+end)/2;

    mergeSort(arr,start,mid); //left side sorting

    mergeSort(arr,mid+1,end); //right side sorting

    merge(arr,start,end); //merging left+right

}

int main(){
    int n;  
    cout << "Enter the size of the array: ";
    cin >> n; 
    
    int *arr = new int[n];

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n;i++ ) {
        cin >> arr[i];
    }

    mergeSort(arr, 0,n-1);
 
    return 0;

}