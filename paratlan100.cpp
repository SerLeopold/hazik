#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main ()
{
    srand(time(0));
    int a[100];
    for (int i=0; i<100; i++)
    {
        a[i]=rand()%50+1;
        cout << a[i] << "\t";
    }

    int szam;
    cout << "\nKerem adjon meg egy szamot 1 es 50 kozott: ";
    cin >> szam;

    int elofordulas = 0;
    for (int i=0; i<100; i++)
    {
        if (a[i] == szam) 
        {   elofordulas++; 
        } 
    }
    cout << "\nA megadott szam " << elofordulas << " alkalommal fordult elo a tomben." << endl;

   

    return 0;
}