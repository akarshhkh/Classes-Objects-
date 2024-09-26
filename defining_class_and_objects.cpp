//Name - akrsh khot
//PRN - 23070123012
//Aim - to study and use the basics in classes and objects.

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};
int main(){

    Student s1 , s2;

    s1.name = "ayush";
    s1.branch = "E&TC";
    s1.subject = "C++";
    s1.year = "second year";
    s1.result = 9;

    cout << "student 1:-" << endl;
    cout << "name:" << s1.name << endl;
    cout << "branch:" << s1.branch << endl;
    cout << "subject:" << s1.subject << endl;
    cout << "year:" << s1.year << endl;
    cout << "result:" << s1.result << endl;

    cout << " " << endl;

    s2.name = "siddhant";
    s2.branch = "E&TC";
    s2.subject = "c++";
    s2.year = "second year";
    s2.result = 8;
    
    cout << "student 2:-" << endl;
    cout << "name:" << s2.name << endl;
    cout << "branch:" << s2.branch << endl;
    cout << "subject:" << s2.subject << endl;
    cout << "year:" << s2.year << endl;
    cout << "result:" << s2.result << endl;


    return 0;
}

/*
OUTPUT
student 1:-
name:ayush
branch:E&TC
subject:C++
year:2023-2027
result:9

student 2:-
name:siddhant
branch:E&TC
subject:c++
year:23-27
result:8
*/
