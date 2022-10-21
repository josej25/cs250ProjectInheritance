#include "Student.h"
#include "Person.h"
#include <iostream>

#include <string>
Student::Student()
{
    m_name = "";
    m_taking = 0;
}
Student::Student(string n, const string c[] , int Size)
{
    m_name =  n;
    m_taking = Size;
    for (int i=0; i<Size; i++)
    {
        m_courses[i] = c[i];
    }

}
