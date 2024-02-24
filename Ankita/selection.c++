#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{22,12,64,11,24} ;
    for(int i=0 ; i<v.size()-1 ; i++)
    {
        int min = i ;
        for(int j=i+1 ; j<v.size() ; j++)
        {
            if(v[j]<v[min])
                min = j ;
        }
        swap(v[i],v[min]);
    }

    for(int i=0 ; i<v.size() ; i++ )
    {
        cout<<v[i]<<" " ;
    }

    return 0;
}