#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,q,x;
    cin >> n;
    vector<int> v,a ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> x;
        v.push_back(x); 
    } 
        cin >> q;
    for(int i=0 ; i<q ;i++)
    {
        cin >> x;
        auto low = lower_bound(v.begin(),v.end(),x);
       if(v[low-v.begin()]==x){
           cout << "Yes " <<  low-v.begin()+1 << '\n';
       }
       else cout << "No " <<  low-v.begin()+1 << '\n';
    }

    
    return 0;
}
