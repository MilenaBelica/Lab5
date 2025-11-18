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
    /*
    //zadanie 3
    int tab2[10];
    int x, z;
    float suma = 0;
    float srednia = 0;
    int num = 0;
    int sec = time(NULL);
    srand(sec);

    for (int i = 0; i < 10; i++) {
        x = rand();
        tab2[i] = x;
        cout << tab2[i] << endl;
    }
    for (z = 0; z < 10; z++) {
        suma += tab2[z];
    }
    srednia = suma / 10;
    cout << "srednia arytmetyczna elementow tablicy " << srednia << endl;
    for (z = 0; z < 10; z++) {
        if (tab2[z] < srednia) {
            num++;
        }
    }
    cout << "Tyle jest liczb mniejszych od sredniej liczb z tablicy " << num << endl;

    int min = tab2[0];
    int max = tab2[0];

    for (z = 1; z < 10; z++) {
        if (tab2[z] < min) min= tab2[z];
        if (tab2[z] > max) max = tab2[z];
    }
    cout << "Najmniejszy element w tablicy to " << min << endl;
    cout << "Najwiekszy element w tablicy to " << max << endl;
    */

    //zadanie 4
    int a; 
    int b;

    cout << "Podaj liczbe wierszy " << endl;
    cin >> a;
    cout << "Podaj liczbe kolumn " << endl;
    cin >> b;
     

    int** table = new int* [a]; 
    for (int i = 0; i < a; i++) {
        table[i] = new int[b];  
    }

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < b; j++) {
            table[i][j];
            cout << "Podaj wartosc dla komorki " << i << "  " << j;
            cin >> table[i][j];
        }
        cout << endl;
    }
}

