#include <iostream>

using namespace std;

double funkwa(double a, double b, double c)
{
    double x1 = 0;
    double x2 = 0;
    double delta = 0;
    delta = (b * b) - 4 * a * c;
    cout << "Delta wynosi: " << delta << endl;
    if(delta < 0)
    { 
        cout << "Delta jest ujemna, brak pierwiastkow rzeczywistych" << endl;
    }
    else 
    {
        double pierwdelta = sqrt(delta);
        cout << "Pierwiastek z delty wynosi: " << pierwdelta << endl;
        x1 = (b * (-1) - pierwdelta) / (2 * a);
        x2 = (b * (-1) + pierwdelta) / (2 * a);
        cout << "x1 wynosi: " << x1 << endl;
        cout << "x2 wynosi: " << x2 << endl;
    }
    return 0;
}

int main()
{
    int a = 2;
    int b = 8;
    int c = 4;
    cout << funkwa(a, b, c);
}
