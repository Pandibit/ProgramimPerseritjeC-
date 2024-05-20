#include<iostream>
using namespace std;

int recursiveFunction(int m, int n)
{
    if (m+1 == n)
         return m;
    return m + recursiveFunction(m + 1 , n);
}

int main()
{
    int m = 2;
    int n = 5 ;

    cout << "The sum of the -values between "<< m << " and " << n << " not including them is : " <<  recursiveFunction(m,n);


    return 0;
}

