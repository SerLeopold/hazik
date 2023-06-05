#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));

    int dobasok = 500;

    int kocka1[dobasok];
    int kocka2[dobasok];

    for (int i = 0; i < dobasok; i++)
    {
        kocka1[i] = rand() % 6 + 1;
        kocka2[i] = rand() % 6 + 1;
        cout << "Dobas " << i + 1 << ": Elso kocka: " << kocka1[i] << ", Masodik kocka: " << kocka2[i] << endl;
    }

    int egyforma = 0;
    for (int i = 0; i < dobasok; i++)
    {
        if (kocka1[i] == kocka2[i])
        {
            egyforma++;
        }
    }

    int egyesek = 0;
    int kettesek = 0;
    int harmasok = 0;
    int negyesek = 0;
    int otosok = 0;
    int hatosok = 0;

    for (int i = 0; i < dobasok; i++)
    {
        if (kocka1[i] == kocka2[i])
        {
            dobasok++;

            switch (kocka1[i])
            {
            case 1:
                egyesek++;
                break;
            case 2:
                kettesek++;
                break;
            case 3:
                harmasok++;
                break;
            case 4:
                negyesek++;
                break;
            case 5:
                otosok++;
                break;
            case 6:
                hatosok++;
                break;
            }
        }
    }

    cout << "\nEgyforma dobasok szama: " << egyforma << endl;
    cout << "\nEgyesekbol: " << egyesek << " egyforma dobas" << endl;
    cout << "\nKettesekből: " << kettesek << " egyforma dobas" << endl;
    cout << "\nHármasokból: " << harmasok << " egyforma dobas" << endl;
    cout << "\nNegyesekeből: " << negyesek << " egyforma dobas" << endl;
    cout << "\nÖtösekből: " << otosok << " egyforma dobas" << endl;
    cout << "\nHatosokbol: " << hatosok << " egyforma dobas" << endl;

    return 0;
}
