#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <Person.h>
#include <string>
using namespace std;
class Student : public Person
{

    private:
        int m_taking;
        static const int cTaking= 10;
        string m_courses[cTaking];
    public:
        Student();
        Student(string,  const string c[] , int);
        string getCourses(){
            string nCourses;
            for (int i=0; i<m_taking; i++){
            nCourses += m_courses[i] + ",";
            }
            return  nCourses;
            }


};

#endif // STUDENT_H
