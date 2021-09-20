/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int choose;
    cout<<"WYBIERZ FIGURĘ, KTÓREJ POLE CHCESZ OBLICZYĆ:\n";
    cout << "TRÓJKĄT - WCIŚNIJ 1\n";
    cout << "KWADRAT - WCIŚNIJ 2\n";
    cout << "PROSTOKĄT - WCIŚNIJ 3\n";
    cout << "ROMB - WCIŚNIJ 4\n";
    cout << "TRAPEZ - WCIŚNIJ 5\n";
    cin >> choose;
    float a;
    float b;
    float c;
    float result;
    float checkYes;
    
    do{
    if(choose == 1){
        cout << " podaj wysokość trójkąta: ";
        cin >> c;
        cout << " podaj bok trójkąta: ";
        cin >> a;
        result = ((c*a)/2);
        cout << result << endl;
    }else if(choose == 2){
        cout << " podaj bok kwadratu: ";
        cin >> a;
        result = a*a;
        cout << result << endl;
    }else if(choose == 3){
        cout << " podaj pierwszy bok prostokąta: ";
        cin >> a;
        cout << " podaj drugi bok prostokąta: ";
        cin >> b;
        result = a*b;
        cout << result << endl;
    }else if(choose == 4){
        cout << " podaj pierwszą wysokość rombu (mniejsza): ";
        cin >> a;
        cout << " podaj drugą wysokość rombu (większa): ";
        cin >> b;
        result = ((a/2) *b);
        cout << result << endl;
    }else if(choose == 5){
        cout << " podaj pierwszy bok trapezu (mniejszy): ";
        cin >> a;
        cout << " podaj drugi bok trapezu (większy): ";
        cin >> b;
        cout << " podaj wysokość trapezu: ";
        cin >> c;
        result = ((a+b)/2)*c;
        cout << result << endl;
    }
    
    cout << "Czy chcesz obliczyć pole dowolnej figury ponownie?[TAK - 1 / NIE - 2]: ";
    cin >> checkYes;
    if(checkYes == 1){
    cout<<"WYBIERZ FIGURĘ, KTÓREJ POLE CHCESZ OBLICZYĆ:\n";
    cout << "TRÓJKĄT - WCIŚNIJ 1\n";
    cout << "KWADRAT - WCIŚNIJ 2\n";
    cout << "PROSTOKĄT - WCIŚNIJ 3\n";
    cout << "ROMB - WCIŚNIJ 4\n";
    cout << "TRAPEZ - WCIŚNIJ 5\n";
    cin >> choose;
    }else 
        cout << "Nie to nie, elo bencc";
    }while(checkYes != 2);

    return 0;
}
