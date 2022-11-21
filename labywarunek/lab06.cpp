#include <iostream>
#include <vector>

using namespace std;

void wypisz(vector<int>tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << endl;
    }
}

int suma(vector<int>tab)
{
    int wynik = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        wynik += tab[i];
    }
    return wynik;
}

int min(vector<int>tab)
{
    int min = tab[0];
    for (int i = 0; i < tab.size(); i++)
    {
        if (min > tab[i])
        {
            min = tab[i];
        }
    }
    return min;
}

int index(vector<int>tab, int el)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (el == tab[i])
        {
            return i;
        }
    }
    return -1;
}

bool czyNalezy(vector<int>tab, int el)
{
    return index(tab, el) > -1;
}

bool czyZawiera(vector<int>tab, vector<int>tab2)
{
    for (int i = 0; i < tab2.size(); i++)
    {
        if (!czyNalezy(tab, tab2[i]))
        {
            return false;
        }
    }
    return true;
}

vector<int> unikalne(vector<int>tab)
{
    vector<int>wynik;
    for (int i = 0; i < tab.size(); i++)
    {
        if (!czyNalezy(wynik, tab[i]))
        {
            wynik.push_back(tab[i]);
        }
    }
    return wynik;
}

int main()
{
    vector<int>tab = { 1, 2, 3, 4, 5 };
    vector<int>tab2 = { 3, 4 };
    vector<int>tab3 = { 3, 6 };
    vector<int>tab4 = {8, 1, 2, 3, 4, 5, 2, 6, 5, 7, 8, 8};
    cout << "============" << endl;
    wypisz(tab);
    cout << "============" << endl;
    cout << suma(tab) << endl;
    cout << "============" << endl;
    cout << index(tab, 2) << endl;
    cout << "============" << endl;
    cout << czyNalezy(tab, 6) << endl;
    cout << "============" << endl;
    cout << min(tab) << endl;
    cout << "============" << endl;
    cout << czyZawiera(tab, tab2)<< endl;
    cout << "============" << endl;
    cout << czyZawiera(tab, tab3) << endl;
    cout << "============" << endl;
    wypisz(unikalne(tab4));
}
