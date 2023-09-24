#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2, 3, 5, 2, 9, 7, 1};
    int k = 3;
    int start = 0;
    int end = 0;
    int sum = 0;
    int maxx = INT_MIN;
    while (end != 6)
    {
        sum = sum + arr[end];
        if (end - start + 1 < k)
            end++;
        else if (end - start + 1 == k)
        {
            maxx = max(maxx, sum);
            sum -= arr[start];
            start++;
            end += 1;
        }
    }
    cout << maxx << endl;
    return 0;
}