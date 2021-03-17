#include <iostream>

using namespace std;

int nt(int n)
{
    int z=0;
    if ( n==2 ) z=1;
    if ( n>2 )
    {
        for( int i=2; i<n; i++ )
		{
			if(n%i==0)
			{
				z = 1;
				break;
			}
		}
    }
    if (z==0) return 1;
    if (z==1) return 0;
    if (n<2) return 1;
}

int main()
{
    int n;
    cin >> n;
    for ( int i=1;i<n;i++ )
    {
        if ( nt(i)==1 )
            cout << i<<" " ;
    }
    return 0;
}
