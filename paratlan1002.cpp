#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main ()
{
    srand(time(0));
    int a[100];
    int paratlan[100];
    for (int i=0; i<100; i++)
    {
        a[i]=rand()%501-200;
        cout << a[i] << "\t";
    }

    int paratlanossz = 0;
    for (int i=0; i<100; i++)
        {
            if (a[i] > 100 && a[i]%2 !=0)
            {
                paratlan[paratlanossz] = a[i];
                paratlanossz++;
            }
        }

    cout << "\nA 100-nal nagyobb paratlan szamok: ";
    for (int i=0; i < paratlanossz; i++)
        {
            cout << paratlan[i] << " ";
        }
    cout << endl;

    cout << "\nA 100-nal nagyobb paratlan szamok darabszama: " << paratlanossz << endl;

   

    return 0;
}