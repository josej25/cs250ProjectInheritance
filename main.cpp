#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include <string>
using namespace std;

int main()
{
    Person p1("Jacob John");
    cout << p1.getName()<< endl;
    string stuCourses[] = {"Computer Science", "English"};
    Student st1("Kay", stuCourses,2 );

    cout << st1.getName()<< ", "<< st1.getCourses()<< endl;
    Professor pf1("Lola ", "ROOM321");
    cout << pf1.getName()<< ", "<< pf1.getOffice()<< endl;
    return 0;
}
