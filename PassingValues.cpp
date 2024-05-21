#include<iostream>
using namespace std;


struct student {
    string name;
    int age;
    bool isEnrolled;
};

int main()
{
    student student1;
    student1.name = "Pandi";
    student1.age = 18;
    student1.isEnrolled = true;

    cout << "The first student name is: " << student1.name << endl;

}
