#include<iostream>
using namespace std;

int findMungesatMax(int mungesatShuma[], int size)
{
    int max = mungesatShuma[0];
    int maxIndex;

    for(int i = 0; i < size; i++)
    {
        if(mungesatShuma[i] > max)
        {
            max = mungesatShuma[i];
            maxIndex = i;
        }
    }

    return maxIndex;


}

int main()
{
    string lendet[] = {"Programim", "Databaze", "Ekonomi", "Anglisht", "Informatike", "Rrjeta"};
    int muajt[] = {1,2,3,4,5,6,7,8,9};

    int mungesat[10][6] =
    {   {63, 44, 75, 10, 32, 38},
        {7, 7, 5, 5, 8, 7},
        {44, 46, 79, 18, 7, 9},
        {9, 8, 10, 9, 10, 8},
        {8, 9, 14, 10, 6, 7},
        {6, 4, 7, 7, 8, 5},
        {8, 6, 9, 6, 7, 6},
        {56, 75, 325, 43, 75, 845},
        {54, 64, 765, 97, 9, 778},
        {43, 65, 34, 234, 53, 432}
    };

    int mungesatSize = sizeof(mungesat[0]) / sizeof(mungesat[0][0]);

    int mungesatShuma[mungesatSize] = {};

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 10; j++)
        {
            mungesatShuma[i] += mungesat[j][i];
        }
    }


    cout << "Mungesat per cdo lende jepen si me poshte: " << endl;
    for(int n = 0; n < mungesatSize; n++){
        cout << *(mungesatShuma + n) << endl;
    }

    int maxIndex = findMungesatMax(mungesatShuma, mungesatSize);
    cout << "Indeksi i shumes me te madhe te mungesave eshte: "<< maxIndex << endl;

    cout << "Lenda qe ka nr me te madh te mungesave eshte lenda me emer: " << lendet[maxIndex] << endl;

}
