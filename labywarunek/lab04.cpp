#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int maximum(vector<int>tab)
{
    int el = tab[0];
    for(int i = 0; i < tab.size(); i++)
    {
        if(tab[i] > el)
        { 
            el = tab[i];
        }
    }
    return el;
}

bool czyNalezy(vector<int>tab, int el)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if(tab[i] == el)
        {
            return true;
        }
    }
    return false;
}

int index(vector<int>tab, int el)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == el)
        {
            return i;
        }
    }
    return -1;
}

bool czyZawiera(vector<int>tab, vector<int>podzb)
{
    for (int i = 0; i < podzb.size(); i++)
    {
        if(!czyNalezy(tab, podzb[i]))
        {
            return false;
        }
    }
    return true;
}

int suma(vector<int>tab)
{
    int suma = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        suma += tab[i];
    }
    return suma;
}

int vito(vector<int>tab)
{
    int wynik = tab[0];
    for (int i = 0; i < tab.size(); i++)
    {
        if(tab[0])
    }
    return wynik;
}

int main()
{
    cout << "==============" << endl;
    vector<int> tab = { 1, 2, 3 };
    vector<int> tab2 = { 2, 5 };
    tab.push_back(4);
    tab.push_back(5);
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << endl;
    }
    cout << "==============" << endl;
    tab[2] = 10;
    for(int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << endl;
    }
    cout << "==============" << endl;
    cout << maximum(tab) << endl;
    cout << "==============" << endl;
    cout << czyNalezy(tab, 5) << endl;
    cout << "==============" << endl;
    cout << czyZawiera(tab, tab2) << endl;
    cout << "==============" << endl;
    cout << index(tab, 5) << endl;
    cout << "==============" << endl;
    cout << suma(tab) << endl;
    cout << "==============" << endl;
    vector<int>tab3 = { 5, 1, 8, 3, 4, 9 };
    cout << vito(tab3) << endl;


}
