#include <iostream>
using namespace std;
#define ll long long int

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++)
		cin>>arr[i];
		if(arr[k]==0)
		{
		    while(k>0 && arr[k]==0)
		        k--;
		    cout<<k;      
		    
		}
		else
		{
        	int i=k+1;
        	while(i<=n && arr[i]==arr[k])
        	{
        	    i++;
        	}
        	cout<<i-1;
}
		}