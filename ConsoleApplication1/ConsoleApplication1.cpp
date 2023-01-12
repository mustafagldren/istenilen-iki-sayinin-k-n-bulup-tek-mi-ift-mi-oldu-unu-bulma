/*istenilen iki sayinin küçüğünü bulup tek mi çift mi olduğunu bulma*/

#include <iostream>
using namespace std;

int main()
{
    int sayi1, sayi2;

    cout << "ilk sayi degerini giriniz :" << endl;
    cin >> sayi1;
    cout << "ikinci sayi degerini giriniz :" << endl;
    cin >> sayi2;

    if (sayi1 > sayi2) {
        if (sayi2 % 2 == 0) {
            cout << "kucuk sayi cifttir." << endl;
       }
        else {
            cout << "kucuk sayi tektir." << endl;
        }
    }
    else {
        if (sayi1 % 2 == 0) {
            cout << "kucuk sayi cifttir." << endl;
        }
        else {
            cout << "kucuk sayi tektir." << endl;
        }
    }
        

system("pause");
return 0;
}