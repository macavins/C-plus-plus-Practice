#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout<<"Enter Number: ";
    cin >> n;
    for (i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}