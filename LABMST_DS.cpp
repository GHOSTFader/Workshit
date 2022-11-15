#include <bits/stdc++.h>

using namespace std;

int index(int arr[], int n, int K)

{
    cout<<"<<<<  MANPREET SINGH >>>>\n";
    cout << "<<<< UID-21BCS2251 >>>>";

        int start = 0;

    int end = n - 1;

    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (arr[mid] == K)

            return mid;

        else if (arr[mid] < K)

            start = mid + 1;

        else
            end = mid - 1;
    }
 return end + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int K = 4;
    cout << "\nThe index of K is:"<<  index(arr, n, K) << endl;
    return 0;
}