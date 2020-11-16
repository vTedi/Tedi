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
    if(n<0 || m<0)
        cout<<"Liczba jest ujemna!"<<endl;
    else
        while(i <= m)
        {
            cout<<i<<endl;
		i = i + n;
        }
}
