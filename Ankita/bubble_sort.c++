#include <iostream>
#include <vector>
using namespace std;

// **********BRUTE FORCE APPROACH*************
// int main()
// {
//     vector<int> v{1,7,8,0,3,5,4,6};

//     for(int i=0 ; i<v.size();i++) 
//     {
//         for(int j=i+1 ; j<v.size() ;j++)
//         {
//             if(v[i] > v[j])
//             {
//                 swap(v[i],v[j]);
//             }
//         }
//     }

//     for(int i=0 ; i<v.size() ; i++ )
//     {
//         cout<<v[i]<<" " ;
//     }
//     return 0;
// }


// ************OPTIMIZED APPROACH**************

int main()
{
    vector<int> v{1,7,8,0,3,5,4,6};

    bool swapped ;
    
    for(int i=1 ; i<v.size(); i++)
    {
        // i is the round 
        bool swapped = false ;
        for(int j=0 ; j<v.size()-i ; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j],v[j+1]) ;
                swapped = true ;
            }
        }

        if(swapped == false)
        {
            break ;
        }
    }

        for(int i=0 ; i<v.size() ; i++ )
        {
            cout<<v[i]<<" " ;
        }
    return 0;
}