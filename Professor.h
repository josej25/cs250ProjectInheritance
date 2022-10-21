#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>
#include <Person.h>
#include <iostream>
using namespace std;

class Professor : public Person
{
    private:
        string m_office;
    public:
        Professor();
        Professor(string name, string office);
        string getOffice()
        {
            return m_office;
        }


};

#endif // PROFESSOR_H
