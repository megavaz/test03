#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // TODO: написать вывод треугольника Паскаля с использованием vector.
    //
    // Вид треугольника:
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // ...
    vector<int> v;
    int size;
    for (int i=0; i<5; i++)
        {size=v.size();
	v.push_back(1);
	if (i>=2)
	for (int j=i;j>1;j--)
	    {v.push_back(v[size-j]+v[size-j+1]);}
	if (i>=1)
	v.push_back(1);    
	}
    int k=0;
    for (int i=0; i<5; i++){
	for (int j=0; j<=i; j++)
	    {cout<<v[k];
	    k++;}
	    cout<<endl;}	    
    return 0;
}

