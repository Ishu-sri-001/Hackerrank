#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t,q;
    vector<int>a;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
    }
     vector<int>::iterator low,f;
    cin>>q;
    while(q--)
    {
        cin>>t;
        low=lower_bound(a.begin(), a.end(), t);
        if(*low!=t)
        {
            cout<<"No "<<low-a.begin()+1<<endl;
        }
        else
        {
            cout<<"Yes "<<low-a.begin()+1<<endl;
        }
            
        
    }
    return 0;
}
