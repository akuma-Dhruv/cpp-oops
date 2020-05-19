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

    cout << s2.rollNumber << " " << s2.age;// will give 101 20 as output
}


//s2 will create a copy of s1

//////////////////////////////////////////////////////////////

class Student {
    int rollNumber;

    public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() const {                 ///will genetrate a error if "cost" is removed as you cant call a non cinstant by a constant obj
                                                
        return rollNumber;
    }

};


int main() {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
    cout << s1.getRollNumber();//will work perfectly despite of being constant function 
}
//similar example 
