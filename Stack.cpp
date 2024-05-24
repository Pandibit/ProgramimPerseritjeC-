#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> stackName )
{
        while(!stackName.empty())
        {
            cout << stackName.top() << " ";
            stackName.pop();
        }

}

int main()
{
    // empty, push, top, pop, size
    stack<int>numberstack;
    int size;
    cout << "How many elements do you want your stack to have: " << endl;
    cin >> size;
    int a;
    cout << "Give the elements of your stack: " << endl;
    for(int i = 0; i < size; i++)
    {
       cin >> a;
       numberstack.push(a);
    }

    cout << "Elements of my stack are: " << endl;
    printStack(numberstack);

    cout <<
}
