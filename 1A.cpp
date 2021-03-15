#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    int a[1000];
    srand(time(0));
    for ( int i=0; i<99; i++ )
    {
        a[i]=rand()%100+1;
        cout << a[i] << " ";
    }
    for (int i=0;i<99;i++)
    {
        for (int j=i+1;j<99;j++)
        {
            if ( a[i]<a[j] )
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout <<endl << "sap xep giam dan" << endl;
    for (int i=0;i<99;i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}
