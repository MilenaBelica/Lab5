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
    /*
    //zadanie 4
    int** tab, w, k;

    cout << "Podaj liczbe wierszy " ;
    cin >> w;
    cout << "Podaj liczbe kolumn " ;
    cin >> k;

    tab = new int* [w];

    for (int i = 0; i < w; i++) {
        tab[i] = new int[k];
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << "Podaj wartosc komorki  " << i << "   " << j << "   ";
            cin >> tab[i][j];
        }
    } 

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << tab[i][j] << "  ";
        }
        cout << endl;
    }
    */

    //zadanie 5
int tab[9];
int r, n;
float suma = 0;

cout << "Podaj ile liczb rzeczywistych chcesz wprowadzic do tablicy ";
cin >> n;

for (int i = 0; i < n; i++) {
    cout << "Podaj wartosc " << i + 1 << " liczby rzeczywistej ";
    cin >> r;
    tab[i] = r;
}
if (n < 10) {
    for (int i = n; i < 10; i++) {
        tab[i] = 0;
        cout << tab[i]<< endl;
    }
}
for (int i = 0; i < 10; i++) {
    suma = suma + tab[i];
}
cout << "srednia: " << suma / 10 << endl;

int max = tab[0], min = tab[0];

for (int i = 0; i < 10; i++) {
    if (tab[i] > min)max = tab[i];
    if (tab[i] < min)min = tab[i];
}
cout << "maksymalna: " << max << endl;
cout << "minimalna: " << min << endl;

/*
//zadanie 6
    int tab[9];
    int sec = time(NULL);
    srand(sec);
    int num=0;
    int i;

    for (i = 0; i < 10; i++) {
        tab[i] = rand();
    }
    int x = rand() % 10;
    if (tab[x] = tab[i]) {
        num++;
    }
    cout << num;
    */
}

