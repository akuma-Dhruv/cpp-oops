#include<iostream>
using namespace std;
class Student {
    public :

    int rollNumber;
    int age;

};


int main() {
    Student s1;


    s1.rollNumber = 101;
    s1.age = 20;
    Student const s2 = s1;

    cout << s2.rollNumber << " " << s2.age;
}


//s2 will create a copy of s1
