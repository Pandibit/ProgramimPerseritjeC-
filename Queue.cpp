#include<iostream>
#include<queue>
using namespace std;

void printQueueElements(queue<int> queueName)
{
    while(!queueName.empty())
    {
        cout << "Elementi i rradhes: " << queueName.front() << endl;
        queueName.pop();
    }
}

int main()
{
    queue<int> numbersqueue;

    int size;
    cout << "Sa elemente deshiron qe te kete rradha jote: " << endl;
    cin >> size;
    cout << "Vendos elementet ne rradhe:  "<< endl;

    int a;
    for(int i = 0; i < size; i++)
    {
        cin >> a;
        numbersqueue.push(a);
    }
    cout << "Elementi i pare i rradhes eshte: "<< numbersqueue.front() << endl ;
    cout << "Elementi i fundit i rradhes eshte: "<< numbersqueue.back() << endl`;

    cout << "Elementet e rradhes jane si me poshte: " << endl;
    printQueueElements(numbersqueue);



}
