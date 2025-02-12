#include "Person_class.h"

Person::Person() : m_lastName("Unknown"), m_profession("None"), m_address("Unknown"), m_age(0), m_phone("0000000000") {}

Person::Person(string lastName, string profession, string address, int age, string phone)
{
    setAll(lastName, profession, address, age, phone);
}

void Person::setAll(string lastName, string profession, string address, int age, string phone)
{
    m_lastName = lastName;
    m_profession = profession;
    m_address = address;
    m_age = age;
    m_phone = phone;
}

void Person::print() const
{
    cout << "==================================" << endl;
    cout << "| " << left << setw(30) << m_lastName << " |" << endl;
    cout << "| " << left << setw(30) << ("Age: " + to_string(m_age)) << " |" << endl;
    cout << "| " << left << setw(30) << ("Profession: " + m_profession) << " |" << endl;
    cout << "| " << left << setw(30) << ("Address: " + m_address) << " |" << endl;
    cout << "| " << left << setw(30) << ("Phone: " + m_phone) << " |" << endl;
    cout << "==================================" << endl;
}
