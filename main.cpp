#include <iostream>

using namespace std;
class car
{
public:
    string marka;
    string model;
    int rocznik;
    int przebieg;

    void dodaj_samochod()
    {
        cout<< "DODAWANIE SAMOCHODU"<<endl;
        cout<< "Podaj marke: ";
        cin>> marka;
        cout<< "Podaj model: ";
        cin>> model;
        cout<< "Podaj rocznik: ";
        cin>> rocznik;
        cout<< "Podaj przebieg: ";
        cin>> przebieg;
    }

    void odczyt()
    {
        cout<< "\nPojazd marki: " << marka << " model: " << model << " z roku: " << rocznik << " o przebiegu: " << przebieg << "km" <<endl;
    }
};
int main()
{
    car s1;
    s1.dodaj_samochod();
    s1.odczyt();
    car s2;
    s2.dodaj_samochod();
    s2.odczyt();
    return 0;
}
