#include <iostream>
#include "Date.h"

#define MAXN 3

using namespace std;

void insertionSort(Date* arrayPtr);
void findDateDiff(Date* date);

int main()
{
    Date date[MAXN];
    date[0] = Date(15, 4, 2018);
    date[1] = Date(29, 5, 2018);
    date[2] = Date(26, 7, 2017);
    insertionSort(date);
    for (int i = 0; i < MAXN; i++)
    {
        cout << date[i] << endl;
    }
    findDateDiff(date);
}


void insertionSort(Date* date)
{
    Date temp;
    int item;
    for (int counter = 1; counter < MAXN; counter++)
    {
        temp = date[counter];
        item = counter - 1;
        while (item >= 0 && temp <= date[item])
        {
            date[item + 1] = date[item];
            date[item] = temp;
            item--;
        }
    }
}

void findDateDiff(Date* date)
{
    int maxDif = date[MAXN - 1] - date[0];
    int minDif = date[1] - date[0];
    for (int i = MAXN; i > 0; i--)
    {
        if (minDif > date[i] - date[i - 1])
            minDif = date[i] - date[i - 1];
    }
    cout << "minDif = " << minDif << endl;
    cout << "maxDif = " << maxDif << endl;
}
