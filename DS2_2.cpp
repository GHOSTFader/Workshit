#include <iostream>

using namespace std;

int MergeArray(int x[], int y[], int arr[], int s, int e)
{

    int mid = (s + e) / 2;

    int i = s;

    int j = mid + 1;

    int k = s;

    while (i <= mid && j <= e)
    {

        if (x[i] < y[j])
        {

            arr[k] = x[i];

            i++;

            k++;
        }

        else
        {

            arr[k] = y[j];

            j++;

            k++;
        }
    }

    while (i <= mid)
    {

        arr[k] = x[i];

        i++;

        k++;
    }

    while (j <= e)
    {

        arr[k] = y[j];

        j++;

        k++;
    }
}

void Mergesort(int arr[], int s, int e)
{

    if (s >= e)
    {

        return;
    }

    int mid = (s + e) / 2;

    int x[1000], y[1000];

    for (int i = 0; i <= mid; i++)
    {

        x[i] = arr[i];
    }

    for (int i = mid + 1; i <= e; i++)
    {

        y[i] = arr[i];
    }

    Mergesort(x, s, mid);

    Mergesort(y, mid + 1, e);

    MergeArray(x, y, arr, s, e);
}

int main()

{

    printf("NAME: MANPREET SINGH\n");

    printf("UID: 21BCS2251\n");
    int n;

    cout << "Enter the size of array: " << endl;

    cin >> n;

    cout << "Enter the values of array: " << endl;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    Mergesort(arr, 0, n);

    cout << "<<<<Array is sorted using Merge sort>>>>" << endl;

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    
}