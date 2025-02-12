#include <iostream>
#include "paralelepiped2_class.h"
using namespace std;

paralelepiped::paralelepiped() {};
paralelepiped::paralelepiped(int a, int b, int c)
{
    setAll(a, b, c);
};
void paralelepiped::setAll(int a, int b, int c)
{
    m_a = a;
    m_b = b;
    m_с = c;
};
void paralelepiped::Sb()
{
    cout << "Side surface area: " << getSb()<<endl;
};
int paralelepiped::getSb()
{
    int S;
    S = 2 * m_с * (m_a + m_b);
    return S;
};
void paralelepiped::Spp()
{
    cout << "Total surface area: " << getSpp()<<endl;
};
int paralelepiped::getSpp()
{
    int S;
    S = 2 * (m_a * m_b + m_b * m_с + m_a * m_с);
    return S;
};