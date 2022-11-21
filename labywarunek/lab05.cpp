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

bool czyNalezy(vector<int>tab, int el)
{
    return index(a, tab) > -1;
}

int abs(int a)
{
    if (a < 0)
    {
        return a * -1;
    }
}

int sumaodl(vector<int>tab, int nr)
{
    int wynik = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        wynik += abs(nr - tab[i]);
    }
    return wynik;
}

int najlepszydom(vector<int>tab)
{
    int wynik = tab[0];
    int odleglosc = sumaodl(tab, tab[0]);
    for (int i = 0; i < tab.size(); i++)
    {
        if (odleglosc > sumaodl(tab, tab[i]))
        {
            odleglosc = sumaodl(tab, tab[i]);
            wynik = tab[i];
        }
    }
    return wynik;
}



int main()
{
    vector<int>tab = { 8, 3, 1, 4, 5, 9 };
    cout << "-----------------" << endl;
    wypisz(tab);
    cout << "-----------------" << endl;
    cout << suma(tab) << endl;
    cout << "-----------------" << endl;
    cout << czyNalezy(tab, 3) << endl;
    cout << "-----------------" << endl;
    cout << index(tab, 3) << endl;
    cout << "-----------------" << endl;
    int a = -3;
    cout << sumaodl(tab, 3) << endl;
    cout << najlepszydom(tab);
}
