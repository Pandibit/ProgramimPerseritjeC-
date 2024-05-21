#include<iostream>
#include<ctime>
#include <iomanip>
using namespace std;

//string concatStrings(string string1, string string2)
//{
//    return string1 + " " + string2;
//}
//
//void bakePizza(string topping1, string topping2)
//{
//    cout<< "This is your pizza with "<< topping1 << " and " << topping2 << endl;
//}

//void showBalance(double balance)
//{
//    cout << "Your balance is: $ " << setprecision(2) << fixed << balance << endl;
//
//};
//double deposit()
//{
//
//    int amount = 0;
//    cout << "Enter the amount that needs to be deposited: " << endl;
//    cin >> amount;
//    if (amount > 0){
//        return amount;
//    }
//    else {
//        cout<< "The amount deposited should be greater than 0!" << endl;
//        return 0;   }
//};
//
//double withdraw(double balance)
//{
//    int withdrawal;
//    cout<< "Enter the amount you need to withdraw: "<< endl;
//    cin >> withdrawal;
//    if(withdrawal < balance )
//    {
//        return withdrawal;
//    }
//    else
//    {
//        cout << "The withdrawal should be less than the balance! ";
//        return 0;
//    }
//
//};
//
//void exit()
//{
//
//    cout << "Thanks for visiting! " << endl;
//}
//
int main()
{
//    double balance = 0;
//    int choice = 0;
//
//    do{
//            cout << "********************\n";
//    cout << "Enter your choice: \n";
//    cout << "********************\n";
//    cout<< "1. Show balance: " << endl;
//    cout<< "2. Deposit your money : " << endl;
//    cout<< "3. Withdraw money: " << endl;
//    cout<< "4. Exit: " << endl;
//    cin >> choice;
//
//
//    switch(choice)
//    {
//    case 1:
//        showBalance(balance);
//        break;
//    case 2:
//        balance += deposit();
//        showBalance(balance);
//
//        break;
//    case 3:
//        balance -= withdraw(balance);
//        showBalance(balance);
//        break;
//    case 4:
//        exit();
//        break;
//    default:
//        cout << "Invalid choice for making an operation " << endl;
//        break;
//
//    }
//
//
//    }while(choice != 4);

srand(time(NULL));
int n = rand() % 6 + 1;
cout << n;


//    srand(time(NULL));
//
//    int num = (rand() % 6) + 1;
//    cout << num;
//
//    string firstName = "Pandush";
//    string lastName = "Bitallari";
//
//    cout << "Hello my fullname is: " << concatStrings(firstName, lastName) << endl ;
//
//    bakePizza("peperoni", "");

//    cout << "Give the number of rows " << endl;
//    int n;
//    cin >>  n;
////    cout << "Give the number of columns " << endl;
////    int m;
////    cin >>  m ;
//
//    cout << "Give the symbol "  << endl;
//    char symbol;
//    cin >> symbol;
//
//
//     for(int i=0; i < n; i++)
//     {
//         for(int j=0; j <= i; j++)
//         {
//             cout<< symbol << ' ';
//         }
//         cout<<endl;
//     }

//    int i = 0;
//
//    do {
//        cout<< "God is my saviour "<< endl;
//        i++;
//    }
//    while(i<=10);
//
//
//    for(int i=0; i<3; i++)
//    {
//        for(int j=1; j<=10 ; j++)
//        {
//            cout<< j << ' ';
//        }
//        cout << endl;
//    }
//

}
