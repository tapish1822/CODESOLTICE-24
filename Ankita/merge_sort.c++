#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v, int l, int mid, int r)
{
    vector<int> temp ;
    int left = l, right = mid+1 ;

    while(left<=mid && right<=r)
    {
        if(v[left]<=v[right])
        {
            temp.push_back(v[left]);
            left++;
        }

        else
        {
            temp.push_back(v[right]) ;
            right++ ;
        }
    }

    while(left<=mid)
    {
        temp.push_back(v[left]);
        left++ ;
    }

    while(right<=r)
    {
        temp.push_back(v[right]) ;
        right++ ;
    }

    for(int i=l ; i<=r ; i++)
    {
        v[i] = temp[i-l] ;
    }
}
void mergesort(vector<int> &v, int l, int r)
{
    if(l>=r)
    return ;

    int mid = (l+r)/2 ;

    mergesort(v,l,mid);
    mergesort(v,mid+1,r);

    merge(v,l,mid,r);
}

int main()
{
    vector<int> v{3,1,2,4,1,5,2,6,4} ;
    mergesort(v,0,v.size()-1) ;

    for(int i=0 ; i<v.size() ; i++ )
    {
        cout<<v[i]<<" " ;
    }
    return 0;
}