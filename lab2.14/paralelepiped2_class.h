#pragma once
class paralelepiped
{
    int m_a, m_b, m_с;
public:
    paralelepiped();
    paralelepiped(int a, int b, int c);
    void setAll(int a, int b, int c);
    void Sb();
    int getSb();
    void Spp();
    int getSpp();
};