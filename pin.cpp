#include <iostream>

using namespace std;

int main()
{
    string PIN;


    do{
        cout << " ";
    cout << " Wprowadź pin: ";
    cin >> PIN;
    if(PIN == "5172"){
        cout << "PIN Poprawny! Zalogowałeś się";
    } else if(PIN != "5172"){
        cout << "Niestety, niepoprawny pin";
    }
    }while(PIN != "5172");
}
