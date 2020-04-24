#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

const int n=5;

void generujTablice(int tab[][n]);
void wypiszTablice(int tab[][n]);
void transponujTablice(int tab[][n]);

int main()
{
    int tablica[n][n];
    srand(time(NULL));

    generujTablice(tablica);
    wypiszTablice(tablica);

    cout << "\n\n";
    transponujTablice(tablica);

    return 0;
}
void generujTablice(int tab[][n])
{
    for(int i=0; i<n; i++)
         for(int j=0; j<n; j++)
         tab[i][j]=rand()%n;
};
void wypiszTablice(int tab[][n])
{
    for(int i=0; i<n; i++)
        {
         for(int j=0; j<n; j++)
        cout<<tab[i][j]<<" ";
        cout<<endl;
        }
};
void transponujTablice(int tab[][n])
{
    int kopia[n][n];
    for(int i=0; i<n; i++)
         for(int j=0; j<n; j++)
            {
            kopia[i][j]=tab[j][i];
            }
       wypiszTablice(kopia);
};
