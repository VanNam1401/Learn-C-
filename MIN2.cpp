#include <iostream>
using namespace std;

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void min(int arr[], int n)
{
    int min1, min2;
    min1 = min2 = max(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min1)
        {
            // min2 = min1;
            min1 = arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min1)
        {
            continue;
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }
    cout << min2;
}
int main()
{
    int n;
    cin >> n;
    int arr[100] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // max(arr, n);
    min(arr, n);
    return 0;
}