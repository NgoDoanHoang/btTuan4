#include <iostream>

using namespace std;

int main()
{
    int n;      //nhap do dai day so
    cin >> n;
    int z;      // so can tim
    cin >> z;
    int a[n];
    for (int i=0;i<n;i++)       //nhap day
    {
        cin >> a[i];
    }
    for (int i=0;i<n;i++)
    {
        if ( z==a[i] )
        {
            cout << "so muon tim la " << z << " dc thay tai vi tri " << i+1 << " ";
        } else cout << "ko thay "; break;
    }
    return 0;
}
