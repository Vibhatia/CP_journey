
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Partittion(int s, int e, int *a)
{
    int i = s;
    int j = e;
    int pivot = a[i];
    while (i < j)
    {
        while (a[i] <= pivot && i < e)
            i++;
        while (a[j] > pivot && j > s)
            j--;
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[j], a[s]);
    return j;
   return (i + 1);
}
void quickSort(int s, int e, int *a)
{
    if (s < e)
    {
        int index = Partittion(s, e, a);
        quickSort(s, index - 1, a);
        quickSort(index + 1, e, a);
    }
}
int main()
{
    int a[] = {1, 2, 7, 6, 4, 0};
    quickSort(0, 5, a);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}