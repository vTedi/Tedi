#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int x;
    cout<<"Wprowadz liczbe"<<endl;
    cin>>n;
        if(n<0)
            cout<<"Liczba jest ujemna, wprowadz dodatnia"<<endl;
            else
                for(int i = 0; i <= n; i++){
                        x = x + pow(i,2);
                }

    cout<<x<<endl;
}
