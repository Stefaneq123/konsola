#include <iostream>
using namespace std;

void wyswietl(int tab[7][7]) {
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int tab[7][7];

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            tab[i][j] = 0;
    cout << "1. Tablica 7x7 wypelniona zerami:\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i++) {
        tab[0][i] = 1;
        tab[6][i] = 1;
        tab[i][0] = 1;
        tab[i][6] = 1;
    }
    cout << "2. Obramowanie jedynkami:\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i++)
        tab[i][i] = 1;
    cout << "3. Przekatna jedynkami:\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i++)
        tab[i][6 - i] = 1;
    cout << "4. Druga przekatna jedynkami:\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            tab[i][j] = 0;

    for(int i = 0; i < 7; i += 2) {
        tab[0][i] = 1;
        tab[6][i] = 1;
        tab[i][0] = 1;
        tab[i][6] = 1;
    }
    cout << "5. Co drugi element obramowania jedynkami:\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i += 2)
        for(int j = 0; j < 7; j++)
            tab[i][j] = 1;
    cout << "6. Co drugi rzad jedynkami:\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            tab[i][j] = 0;

    for(int j = 0; j < 7; j += 2)
        for(int i = 0; i < 7; i++)
            tab[i][j] = 1;
    cout << "7. Co druga kolumna jedynkami:\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            tab[i][j] = 0;

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            if((i + j) % 2 == 0)
                tab[i][j] = 1;
    cout << "8. Co drugi skos jedynkami (i+j parzyste):\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            tab[i][j] = 0;

    for(int i = 0; i < 7; i++) {
        tab[i][i] = 1;
        tab[i][6 - i] = 1;
    }
    tab[3][3] = 2;
    cout << "9. Obie przekatne jedynkami, srodek = 2:\n";
    wyswietl(tab);

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            tab[i][j] = 0;

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            if(abs(i - j) <= 1) tab[i][j] = 1;
        }
    }
    cout << "10. Przekatna o grubosci 3:\n";
    wyswietl(tab);

        for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            tab[i][j] = 0;

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if(i % 3 == 0){
                tab[i][j] = 0;
            }else if(i % 3 == 1){
                tab[i][j] = 1;
            }else{
                tab[i][j] = 2;
            }
        }
    }

    cout << "11. Wartosci wierszy kolejno 0,1,2,...:\n";
    wyswietl(tab);


    cout << "12.Skosy kolejno 0, 1, 2, 0, 1, 2 itd..\n";
    for (int x = 0; x < 7; x++) {
        for (int y = 0; y < 7; y++) {
            if (y == 0)
                tab[x][y] = 0;
            else if (y == 1)
                tab[x][y] = (x >= 1) ? 1 : 0;
            else if (y == 2)
                tab[x][y] = (x == 1) ? 1 : (x >= 2) ? 2 : 0;
            else if (x <= 2)
                tab[x][y] = x;
            else if (x == 3)
                tab[x][y] = 0;
            else if (x == 4) {
                if (y < 4) tab[x][y] = 0;
                else tab[x][y] = 1;
            }
            else if (x == 5) {
                if (y < 4) tab[x][y] = 0;
                else if (y == 4) tab[x][y] = 1;
                else if (y == 5) tab[x][y] = 2;
                else if (y == 6) tab[x][y] = 2;
            }
            else if (x == 6) {
                if (y < 4) tab[x][y] = 0;
                else if (y == 4) tab[x][y] = 1;
                else if (y == 5) tab[x][y] = 2;
                else if (y == 6) tab[x][y] = 0;
            }
        }
    }

    for (int x = 0; x < 7; x++) {
        for (int y = 0; y < 7; y++) {
            cout << tab[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
