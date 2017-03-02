#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w naszym banku" << endl;
    cout << "Podaj PIN:";
    cin >> PIN;

    if(PIN=="1234"||PIN=="4321")
    {
        cout << "PIN poprawny";
    }
    else
    {
        cout << "PIN nieprawidlowy";
    }

    return 0;
}
