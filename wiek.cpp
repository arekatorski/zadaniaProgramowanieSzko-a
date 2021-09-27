#include <iostream>

using namespace std;

int main()
{
    int wiek;
   cout << "Podaj swój wiek: ";
   cin >> wiek;

   if(wiek >= 18 && wiek >= 35)
    cout << "Jesteś pełnoletni i możesz być prezydentem";
   else if (wiek >= 18 && wiek < 35)
    cout << "Jesteś pełnoletni, ale nie możesz być prezydentem";
   else if(wiek < 18 && wiek < 35)
    cout << "Nie jesteś pełnoletni i nie możesz być prezydentem"
    ;
}

