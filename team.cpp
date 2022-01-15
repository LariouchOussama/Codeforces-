#include <iostream>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin >> n;
    int p,v,t;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >>p>>v>>t;
        if (p+v+t>=2)
            count+=1;
    }
    cout << count << endl;

}