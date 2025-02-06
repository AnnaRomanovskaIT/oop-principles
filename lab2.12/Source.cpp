#include <iostream>
#include < iomanip >
#include "Person_class.h"
using namespace std;

Person::Person(string nazwisko, string proffesion, string adress, int old, int phone)
{
    setAll(nazwisko, proffesion, adress, old, phone);
};
void Person::setAll(string nazwisko, string proffesion, string adress, int old, int phone)
{
    m_nazwisko = nazwisko;
    m_proffesion = proffesion;
    m_adress = adress;
    m_old = old;
    m_phone = phone;
};
void Person::print()
{
    cout << "==================================" << endl;
    //34
    cout << "| " << m_nazwisko;
    cout.width(34 - (m_nazwisko.length() + 2));
    cout << "|" << endl;
    cout << "| " << "years: " << m_old;
    cout.width(34 - 4 - 7);
    cout << "|" << endl;
    cout << "| " << "proffesion: " << m_proffesion;
    cout.width(34 - (m_proffesion.length() + 14));
    cout << "|" << endl;
    cout << "| " << "adress: " << m_adress;
    cout.width(34 - (m_adress.length() + 10));
    cout << "|" << endl;
    cout << "| " << m_phone;
    cout.width(34 - 10);
    cout << "|" << endl;
    cout << "==================================" << endl;
};