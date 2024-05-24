#include<iostream>
using namespace std;
double findMaxAverage(double mesataret[], int size)
{
//    size = sizeof(mesataret)/ sizeof(int)

    double max = mesataret[0];
    double maxIndex;
    double maxCount = 0;
    double maxValues[size] = {};

    for(double i = 0; i < size; i++)
    {
        if(mesataret[i] >= max)
        {
            max = mesataret[i];
        }
    }

    for(double j = 0; j < size; j++)
    {
        if( mesataret[i] == max)
        {
            maxValues[j++] = mesataret[i];
        }
    }

    for(double n = 0; n < maxCount; n++ )
    {
        return maxValues[n];
    }


}

int main()
{

    string lendet[] = {"Programim", "Databaze", "Ekonomi", "Anglisht", "Informatike", "Rrjeta" };
    int nxenesit[] = {1,2,3,4,5,6,7};
    double mesataret[6] = {};

    double Notat[7][6] = {
        {6, 4, 7, 10,9, 8},
        {7, 7, 5, 5, 8, 7},
        {4, 6, 9, 8, 7, 9},
        {9, 8, 10, 9, 10, 8},
        {8, 9, 4, 10, 6, 7},
        {6, 4, 7, 7, 8, 5},
        {8, 6, 9, 6, 7, 6}
    };


    for(int i = 0; i < 6 ; i++)
    {
        for( int j = 0; j < 7; j++)
        {
            mesataret[i] += Notat[j][i] / 7;
        }
    }

    cout << "Mesataret per cdo lende jane:" << endl;

    for(int n=0; n < 6; n++)
    {
        cout << mesataret[n] << " "<< endl;

    }


    int maxIndex = findMaxAverage(mesataret, 6);

    cout << "Indeksi qe ka mesataren me te larte eshte: "<< maxIndex << endl;



}
