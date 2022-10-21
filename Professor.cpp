#include "Professor.h"
#include <string>
Professor::Professor()
{
   m_office = "";
}
Professor::Professor(string n,string office)
{
    m_name = n;
    m_office= office;
}
