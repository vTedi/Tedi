#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Wpisz liczbe dodatnia calkowita"<<endl;
    cin>>n;
    int m;
    cout<<"Wpisz druga liczbe dodatnia calkowita"<<endl;
    cin>>m;
    int i=n;
        for (int x = 0; x < 30; x++, i <= m)
        {
            cout<<i<<endl;
		i = i + n;
        }
}
