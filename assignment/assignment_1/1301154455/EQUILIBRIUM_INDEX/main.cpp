#include <iostream>

using namespace std;



int main()

{

    int i, j, k, idx, kanan, kiri, jmlIsiIdx, tengah, tmp;
    bool statusIdx = false; //indeks ekuilibrium diset dengan false
    int x[idx]; //x adalah array nya


    cout << "Masukkan Banyak Indeks : ";

    cin >> idx;
    tmp = idx;

    for(i=0 ; i <idx; i++)

    {

        cout << "Masukkan Isi Array "<<i<<" : ";

        cin >> x[i];

    }

    int p = 0;

    while ((p < idx) && ( ! statusIdx))

    {

        kanan = 0; //kanan dan kiri diset dengan 0

        kiri = 0;

        if (p == 0)

        {

            for(j = 1; j <= idx; j++)

            {

                kanan = kanan + x[j];

            }

            if (kanan == x[0])

            {

                statusIdx = true;

            }

        }

        else if (p==idx-1)

        {

            for (j = 0; j < idx-1; j++)

            {

                kiri = kiri + x[j];

            }

            if (kiri == x[idx-1] )

            {

                statusIdx = true;

            }

        }

        else

        {

            for (j=0; j < p; j++)

            {

                kiri = kiri + x[j];

            }

            for(k = p+1; k <= idx; k++)

            {

                kanan = kanan + x[k];

            }

            if (kiri == kanan)

            {

                statusIdx = true;

            }

        }

        p++;

    }

    tengah = idx /= 2; //mencari indeks tengah

    for (i=0; i < idx; i++)
    {
        jmlIsiIdx = jmlIsiIdx + x[i];
    }


    if (statusIdx==true)
    {
//        if (indeks-1 == indeks0)
//        {
        cout << tengah << " " << tmp-1 <<"\n";
//        }
    }

};
