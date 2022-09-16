#include <iostream>
using namespace std;
int main()
{
    int noOfArray, noOfQueries;
    cin >> noOfArray >> noOfQueries;
    int **arr = new int *[noOfArray];
    for (int i = 0; i < noOfArray; i++)
    {
        int arrayLength;
        cin >> arrayLength;
        int *tempArray = new int[arrayLength];
        for (int j = 0; j < arrayLength; j++)
        {
            cin >> tempArray[j];
        }
        arr[i] = tempArray;
    }
    for (int i = 0; i < noOfQueries; i++)
    {
        int posArray, posElement;
        cin >> posArray >> posElement;
        cout << *(*(arr + posArray) + posElement) << endl;
    }
    return 0;
}
