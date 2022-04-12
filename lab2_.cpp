


#include <iostream>


using namespace std;




int main()
{
    const int roz = 5;
    int tabA[roz], tabB[roz];
    cout << "Poda elementy tablicy: ";

    for (int i = 0; i < roz; i++) 
    {
        cin >> tabA[i];
        tabB[i] = tabA[i];
    }

    for (int i = 0; i < roz; i++) 
    {
        while (tabA[i] >= 10)
        {
            tabA[i] = tabA[i] / 10;


        }
       

    }
    
    for (int i = 0; i < roz-1; i++)
    {
        for (int j = 0; j < roz - 1; j++)
        {
            if (tabA[j] > tabA[j + 1])
            {
                swap(tabA[j], tabA[j + 1]);
                swap(tabB[j], tabB[j + 1]);
                
            }

        }

    }



    //wypsianie
    cout << "Tablica po posortowaniu" << endl;
    for (int i = 0; i < roz; i++)
    {
        cout << tabB[i] << " ";
    }

}

