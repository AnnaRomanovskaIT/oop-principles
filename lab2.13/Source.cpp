#include <iostream>
#include "paralelepiped_class.h"
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
}
void paralelepiped::getV()
{
    cout << "v is " << V() << endl;
}
int paralelepiped::V()
{
    int v;
    v = (m_a * m_b) * m_с;
    return v;
};