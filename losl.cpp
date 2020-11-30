#include<iostream>
#include<ctime> // biblioteka dla funkcji time
using namespace std;

int main()
{
int a,b,i;
i=1;
srand(time(NULL)); //zerowanie zegara
a=rand()%101; // losowanie liczb od 0 do 100
cout << "Podaj liczbe: ";
cin >> b;
while (a != b)
{
if (a < b)
cout << "liczba jest za duza" << endl;
else
cout << "liczba jest za mala" << endl;
i++;
cin >> b;

}
cout << "Trafiles!"  << endl;
cout << "Udalo Ci sie za "; cout << i; cout << " razem " ;


return 0;
}
