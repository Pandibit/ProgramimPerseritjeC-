#include<iostream>
using namespace std;
int main()
{

    // 1. Jep pagen bruto
    // 2. Llogarit se sa lek i bien sigurime shoqerore
    // 3. Llogarit se sa lek i bie sigurime shendetesore
    // 4. Llogarit pagen neto dhe beji return asaj

    float pagaBruto;
    cout << "Jep pagen bruto ju lutem: "<< endl;
    cin >> pagaBruto;

    float sigurimetShendetesore = 0.095 * pagaBruto;
    float sigurimetShoqerore = pagaBruto *  0.017;

    float pagaNeto = pagaBruto - (sigurimetShoqerore + sigurimetShendetesore);

    cout << "Paga juaj neto eshte: "<< pagaNeto << endl;


}
