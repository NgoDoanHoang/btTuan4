#include <iostream>
#include <ctime>
#include <stdlib.h>


using namespace std;

int main()
{
    srand(time(0));
    int n;
    n=rand()%10000+1;
    int a[n];
    cout << "so luong = " << n << endl;
    clock_t begin = clock();
    for ( int i=0; i<n; i++ )
    {
        a[i]=rand()%n+1;
    }
    for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    clock_t end = clock();
    double elapsedSecs = double(end-begin) / CLOCKS_PER_SEC;
    cout << endl << "time = " << elapsedSecs;
    return 0;
}
