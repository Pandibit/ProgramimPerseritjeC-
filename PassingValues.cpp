#include<iostream>
using namespace std;

//struct Car{
//    string model;
//    int year;
//    string color;
//};
//
//void printCar(Car   car){
//    cout << car.model << endl;
//    cout << car.year << endl;
//    cout << car.color  << endl;
//};

//struct student {
//    string name;
//    int age;
//    bool isEnrolled;
//};

class Stove{
private:
    int temperature = 0;
public:
    Stove(int temp){
        setTemperature(temp);
    }
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int temp){
        if(temp < 0)
        {
            this -> temperature = 0;
        }
        else{
           this ->  temperature = temp;
        }

    }


};

int main()
{

    Stove stove(323);


    cout << "The stove temperature is: " << stove.getTemperature() << endl;


//    Car car1;
//    Car car2;
//
//    car1.model = "BMW";
//    car1.color = "blue";
//    car1.year = 2023;
//    printCar(car1);


//    student student1;
//    student1.name = "Pandi";
//    student1.age = 18;
//    student1.isEnrolled = true;
//
//    cout << "The first student name is: " << student1.name << endl;

}
