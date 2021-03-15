#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    int a[100];
    srand(time(0));
    cout << "day 100 so ngau nhien" << endl;
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
    cout << endl << "nhap so can tim" << "\n";
    int z;
    cin >> z;
    cout << "tim thay tai vi tri ";
    for (int i=0;i<99;i++)
    {
        if ( a[i]==z )
        {
            cout << i+1 << " ";
        }
    }
    return 0;
}

