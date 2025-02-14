#include <iostream>
#include <string>
#include "lab5.4.h"
using namespace std;
o_system::o_system() { yadro = "core"; interface = "~~~~~~~"; draivers = ".=.=.="; };
o_system::o_system(string y, string i, string d)
{
    yadro = y;
    interface = i;
    draivers = d;
}
o_system::o_system(const o_system& object)
{
    yadro = object.yadro;
    interface = object.interface;
    draivers = object.draivers;
}
o_system::~o_system() {};
std::ostream& operator<< (std::ostream& out, const o_system& o)
{
    out << "it's operation system with " << o.yadro << " interface is " << o.interface << " and drivers " << o.draivers;
    return out;
};
std::istream& operator>> (std::istream& in, o_system& o)
{
    in >> o.yadro;
    in >> o.interface;
    in >> o.draivers;
    return in;
}
Windows::Windows() { yadroW = "core"; interfaceW = "~]~[~]~[~]~[~"; draiversW = "+_=_=_-"; };
Windows::Windows(string y, string i, string d)
    {
        yadroW = y;
        interfaceW = i;
        draiversW = d;
    }
Windows::Windows(const Windows& object)
    {
        yadroW = object.yadroW;
        interfaceW = object.interfaceW;
        draiversW = object.draiversW;
    }
Windows::~Windows() {};

std::ostream& operator<< (std::ostream& out, const Windows& o)
{
    out << "it's operation system with " << o.yadro << " type of " << o.yadroW << " interface is " << o.interface << " type of " << o.interfaceW << " and drivers " << o.draivers << " type of " << o.draiversW;
    return out;
};
std::istream& operator>> (std::istream& in, Windows& o)
{
    in >> o.yadroW;
    in >> o.interfaceW;
    in >> o.draiversW;
    return in;
}