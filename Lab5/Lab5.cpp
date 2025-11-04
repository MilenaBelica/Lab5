// Lab5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    //zadanie 1
    int tab[10];
    for (int i = 0 ; i < 10; i++) {
        cout << "Wprowadz liczbe calkowita: ";
        cin >> tab[i];
    }
    cout << "Liczby w odwroconej kolejnosci: ";
    for (int x = 9; x >= 0; x--) {
        cout << tab[x] << endl;
    }
    */


    /*
    //zadanie 2
    int z;
    cout << "Ile liczb Fibonacciego chcesz wyznaczyc? ";
    cin >> z;

    int* tab = new int [z];
    tab[0] = 0;
    tab[1] = 1;

    if (z == 0) {
        cout << " brak wartosci "<< endl;
    }
    else if (z == 1) {
        cout << tab[0] << endl;
    }
    else if (z == 2) {
        cout << tab[0] << endl;
        cout << tab[1] << endl;
    }
    else {
        cout << tab[0] << endl;
        cout << tab[1] << endl;
        for (int i = 2; i < z; i++) {
            tab[i] = tab[i - 1] + tab[i - 2];
        }
        for (int i = 2; i < z; i++) {
            cout << tab[i] << endl;
        }
    }
    */

    //zadanie 3
    int tab2[10];
    int x, z;
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        x = rand() % 10 + 1;
        tab2[i] = x;
        cout << tab2[i] << endl;
    }
    for (z = 0; z < 10; z++) {
        suma += tab2[z];
    }
    cout << "suma elementow tablicy " << suma << endl;
    if (tab2[z] < suma) {
        cout << tab2[z];
    }

}

