#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{

    protected:
        string m_name;
    public:
        Person();
        Person(string);


        string getName()
        {
            return m_name;
        }



};

#endif // PERSON_H
