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
/*
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
*/

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
/*
    //zadanie 7
int w, k;
int** tab;
int** tab2;
int i1, i2, i3, i4;
int j1, j2;


cout << "Podaj wymiary macierzy " << endl;
cout << "-----------------------" << endl;
cout << "Podaj liczbe wierszy ";
cin >> w;
cout << "Podaj liczbe kolumn ";
cin >> k;
cout << "-----------------------" << endl;

tab = new int* [w];

for ( i1 = 0; i1 < w; i1++) {
    tab[i1] = new int[k];
}

for (i2 = 0; i2 < w; i2++) {
    for (int j1 = 0; j1 < k; j1++) {
        cout << "Podaj wartosci dla pierwszej macierzy:  " << i2 << "," << j1 << "   ";
        cin >> tab[i2][j1];
    }
}
cout << "-----------------------" << endl;

tab2 = new int* [w];

for (i3 = 0; i3 < w; i3++) {
    tab2[i3] = new int[k];
}

for (i4 = 0; i4 < w; i4++) {
    for (int j2 = 0; j2 < k; j2++) {
        cout << "Podaj wartosci dla drugiej macierzy:  " << i4 << "," << j2 << "   ";
        cin >> tab2[i4][j2];
    }
}
cout << "-----------------------" << endl;

for (int i = 0; i < w; i++) {
    for (int j = 0; j < k; j++) {
        cout << tab[i][j] + tab2[i][j] << "\t";
    }
    cout << endl;
}
*/

//zadanie 8
int** tab;
int** tab2;
int w, k;
int i1, i2;
int j1, j2;
int m;

cout << "Podaj wymiary macierzy " << endl;
cout << "-----------------------" << endl;
cout << "Podaj ilosc wierszy " ;
cin >> w;
cout << "Podaj ilosc kolumn " ;
cin >> k;

tab = new int* [w];
cout << endl;
cout << "Podaj wartosci dla macierzy nr.1 " << endl;
for (i1 = 0; i1 < w; i1++) {
    tab[i1] = new int[w];
}
for (i1 = 0; i1 < w; i1++) {
    for (j1 = 0; j1 < k; j1++) {
        cout << "Podaj wartosc dla komorki macierzy o wspol. " << i1 << "," << j1 <<"  ";
        cin >> tab[i1][j1];
    }
}

tab2 = new int* [w];
cout << endl;
cout << "Podaj wartosci dla macierzy nr.1 " << endl;
for (i2 = 0; i2 < w; i2++) {
    tab2[i2] = new int[w];
}
for (i2 = 0; i2 < w; i2++) {
    for (j2 = 0; j2 < k; j2++) {
        cout << "Podaj wartosc komorki macierzy o wspol. " << i2 << "," << j2<<"  ";
        cin >> tab2[i2][j2];
    }
}

cout << endl;
for (int m = 0; m < w; m++) {
    for (int m1 = 0; m1 < k; m1++) {
        cout << tab[m][m1] * tab2[m][m1] << "\t";
    }
    cout << endl;
}


}

