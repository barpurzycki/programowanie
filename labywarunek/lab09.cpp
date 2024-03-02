#include <iostream>
#include <vector>
#include <ctime>
#include <map>

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

int max(vector<int>tab)
{
    int max = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
}

vector<int> podzielnosc(vector<int>tab, int dzielnik, int reszta = 0)
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

vector<int> unikalnosc(vector<int>tab)
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

vector<int> generuj(int ile, int max, int min = 0)
{
    vector<int>wynik;
    for (int i = 0; i < ile; i++)
    {
        wynik.push_back(rand() % (max - min) + min);
    }
    return wynik;
}

bool czyNalezyKlucz(map<int, int>m, int klucz)
{
    for (auto item : m)
    {
        if (item.first == klucz)
        {
            return true;
        }
    }
    return false;
}

map<int, int>czestosc(vector<int>tab)
{
    map<int, int> wynik;
    for (int i = 0; i < tab.size(); i++)
    {
        if (!czyNalezyKlucz(wynik, tab[i]))
        {
            wynik.insert({ tab[i], 1 });
        }
        else
        {
            wynik[tab[i]]++;
        }
    }
    return wynik;
}

void wypiszmapa(map<int, int>m)
{
    for (auto item : m)
    {
        cout << item.first << " " << item.second << endl;
    }
}

//1. Wymyślamy przykład 
//2. Sprawdzamy, czy jest poprawny
//3. Formalizujemy przykład
//4. Piszemy nagłówek funkcji
//5. Piszemy ciało funkcji
//6. Jeśli nie wiemy co dalej, wracamy do przykładu

int main()
{
    srand(time(NULL));
    vector<int>tab = { 1, 2, 3, 4, 4 };
    vector<int>tab2 = {3, 4};
    vector<int>tab3 = { 8, 7, 1, 2, 2, 7, 8 };
    cout << "==========" << endl;
    wypisz(tab);
    cout << "==========" << endl;
    cout << suma(tab) << endl;
    cout << "==========" << endl;
    cout << index(tab, 1) << endl;
    cout << "==========" << endl;
    cout << czyNalezy(tab, 4) << endl;
    cout << "==========" << endl;
    cout << czyZawiera(tab, tab2) << endl;
    cout << "==========" << endl;
    cout << max(tab) << endl;
    cout << "==========" << endl;
    wypisz(podzielnosc(tab, 2));
    cout << "==========" << endl;
    wypisz(unikalnosc(tab));
    cout << "==========" << endl;
    wypisz(generuj(5, 10));
    cout << "==========" << endl;
    wypiszmapa(czestosc(tab3));


    //Sprawdzanie
}
