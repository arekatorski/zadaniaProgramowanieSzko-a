#include <iostream>

using namespace std;

int main()
{
    string PIN;


    do{
        cout << "\n";
    cout << " Wprowadź pin: ";
    cin >> PIN;
    if(PIN == "5172"){
        cout << "PIN Poprawny! Zalogowałeś się\n";
    } else if(PIN != "5172"){
        cout << "Niestety, niepoprawny pin\n";
    }
    }while(PIN != "5172");
}
