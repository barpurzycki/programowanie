#include <iostream>
#include <vector>
#include <ctime>

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
    return index(tab, el) > -1;
}

int max(vector<int>tab)
{
    int max = tab[0];
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
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

vector<int>unikalnosc(vector<int>tab)
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

vector<int>podzielnosc(vector<int>tab, int dzielnik, int reszta = 0)
{
    vector<int>wynik;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] % dzielnik == reszta)
        {
            wynik.push_back(tab[i]);
        }
    }
    return wynik;
}

vector<int>generuj(int ile, int max, int min = 0)
{
    vector<int>wynik;
    for (int i = 0; i < ile; i++)
    {
        wynik.push_back(rand() % (max - min) + min);
    }
    return wynik;
}

// 6 punktów
// 1. Wymyślamy przykład
// 2. Sprawdzamy, czy przykład jest poprawny
// 3. Wymyślamy przykład, który będzie niepoprawny
// 4. Piszemy nagłówek funkcji
// 5. Piszemy ciało funkcji
// 6. Sprawdzamy, czy funkcja działa poprawnie


// 
// 1. Przykład
// 2. Sprawdzamy czy jest kompletny
// 3. Formalizujemy 
// 4. Nagłówek funkcji
// 5. Ciało funkcji
// 6. 


int main()
{
    srand(time(NULL));
    vector<int>tab = { 1, 2, 3, 4, 6, 12, 18, 19, 21 };
    vector<int>tab2 = { 1, 2};
    cout << "================" << endl;
    wypisz(tab);
    cout << "================" << endl;
    cout << suma(tab) << endl;
    cout << "================" << endl;
    wypisz(unikalnosc(tab));
    cout << "================" << endl;
    cout << czyZawiera(tab, tab2) << endl;;
    cout << "================" << endl;
    cout << czyNalezy(tab, 2) << endl;;
    cout << "================" << endl;
    cout << max(tab) << endl;
    cout << "================" << endl;
    cout << index(tab, 3) << endl;
    cout << "================" << endl;
    wypisz(podzielnosc(tab, 4));
    cout << "================" << endl;
    wypisz(generuj(5, 10));
    cout << "================" << endl;
    wypisz(generuj(5, 10, 5));
}
