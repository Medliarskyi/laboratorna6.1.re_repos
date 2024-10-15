#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int SIZE, int i = 0)
{
    int MIN = -15;
    int MAX = 75;
    if (i < SIZE)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
        create(arr, SIZE, i + 1);
    }
}

void Print(int* arr, const int SIZE, int i = 0)
{
    if (i < SIZE)
    {
        cout << setw(4) << arr[i];
        Print(arr, SIZE, i + 1);
    }
    else
    {
        cout << endl;
    }
}

int sum(int* arr, int SIZE, int i = 0)
{
    if (i >= SIZE)
        return 0;
    if (arr[i] % 2 == 0 && arr[i] < 0)
        return arr[i] + sum(arr, SIZE, i + 1);
    return sum(arr, SIZE, i + 1);
}

int count(int* arr, int SIZE, int i = 0)
{
    if (i >= SIZE)
        return 0;
    if (arr[i] % 2 == 0 && arr[i] < 0)
        return 1 + count(arr, SIZE, i + 1);
    return count(arr, SIZE, i + 1);
}

void updateArray(int* arr, int SIZE, int i = 0)
{
    if (i < SIZE)
    {
        if (arr[i] % 2 == 0 && arr[i] < 0)
        {
            arr[i] = 0;
        }
        updateArray(arr, SIZE, i + 1);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    const int SIZE = 24;
    int arr[SIZE];
    create(arr, SIZE);
    Print(arr, SIZE);
    cout << endl;
    cout << "sum = " << sum(arr, SIZE) << endl;
    cout << "count = " << count(arr, SIZE) << endl;
    updateArray(arr, SIZE);
    Print(arr, SIZE);
    return 0;
}