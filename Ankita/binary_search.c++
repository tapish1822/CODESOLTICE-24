#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int value ;
    cout<<"Enter the value : " ;
    cin>>value ;
    vector<int> arr{1,2,3,4,5,6} ;
    int start = 0, end = arr.size()-1 , mid = start+(end-start)/2 ;

    while(start <= end)
    {
        mid = start+(end-start)/2 ;

        if(arr[mid] == value)
        {
            cout<<"Value is found at index: " << mid ;
            break ;
        }

        else if(value>arr[mid])
        {
            start=mid+1 ;
        }

        else
        {
            end=mid-1 ;
        }
    }
    return 0 ;
}