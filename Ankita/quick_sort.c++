#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &v, int l, int h)
{
    int pivot = v[l] ;
    int i=l ;
    int j=h ;

    while(i<j)
    {
        while(v[i]<=pivot && i<=h-1)
            i++ ;
        while(v[j]>pivot && j>=l+1 )
            j-- ;

        if(i<j)
        {
            swap(v[i], v[j]) ;
        }
    }

    swap(v[l], v[j]);

    return j ;
}

void qs(vector<int> &v,int l, int h) 
{
    if(l<h)
    {
        int pivotIndex = func(v,l,h) ;
        qs(v,l,pivotIndex-1);
        qs(v,pivotIndex+1,h);
    }
}
int main()
{
    vector<int> v{4,6,2,5,7,9,1,3} ;

    qs(v,0,v.size()-1) ;

    for(int i=0 ; i<v.size() ; i++ )
    {
        cout<<v[i]<<" " ;
    }
    return 0;
}