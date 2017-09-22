#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int size;
    int n;
    cout<<"Enter length of triangle"<<endl;
    cin>>n;
    for (int i=0; i<n; i++)
        {size=v.size();
	v.push_back(1);
	if (i>=2)
	for (int j=i;j>1;j--)
	    {v.push_back(v[size-j]+v[size-j+1]);}
	if (i>=1)
	v.push_back(1);    
	}
    int k=0;
    for (int i=0; i<n; i++){
	for (int j=0; j<=i; j++)
	    {cout<<v[k]<<" ";
	    k++;}
	    cout<<endl;}	    
    return 0;
}

