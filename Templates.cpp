

#include<iostream>
using namespace std;

template<typename T>
void Swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 2, b=7;
    string c = "s", d = "s";

    cout << a << "- "<< b << endl;
    Swap<int>(a, b);
    cout << a << "- "<< b << endl;

    cout << c << "- "<< d<< endl;
    Swap<string>(c, d);
    cout << c << "- "<< d << endl;


    return 0;
}

