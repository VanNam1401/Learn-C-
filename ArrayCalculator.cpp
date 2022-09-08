#include <iostream>
using namespace std;

class ArrayCalculator
{
public:
    static int sumOfArray(int arr[], int n)
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
    static double sumOfArray(double arr[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n ; i++)
        {
            sum += arr[i];
        }
        return 0;
    }
};
int main()
{
    int n; cin >> n;
    int arr[1000];
    ArrayCalculator s;
    for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    cout << s.sumOfArray(arr, n) << endl;
    cout << s.sumOfArray(arr, n);
    return 0;
}
