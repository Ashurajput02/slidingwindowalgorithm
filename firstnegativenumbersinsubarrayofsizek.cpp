#include <iostream>
using namespace std;
void solveusingbruteforce()
{
    int arr[8] = {12, -1, -7, 8, -16, 30, 16, 28};
    int k = 3;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
            continue;
        }
        else if (arr[i + 1] < 0)
        {
            cout << arr[i + 1] << " ";
            continue;
        }

        else if (arr[i + 2] < 0)
        {
            cout << arr[i + 2] << " ";
            continue;
        }
    }
}
void solveusingslidingwindow()
{

    int arr[8] = {12, -1, -7, 8, -16, 30, 16, 28};
    int k = 3;
    int start = 0;
    int end = 0;
    int l = -1;
    while (end != 7)
    {
        if (arr[start] < 0 && l == -1)
            l = start;

        else if (arr[end] < 0 && l == -1)
            l = end;

        if ((end - start + 1) < k)
        {

            end++;
        }

        else if (end - start + 1 == k)
        {
            if (l != -1)
                cout << arr[l] << " ";
            l = -1;
            end++;
            start++;
        }
    }
}
int main()
{
    // solveusingbruteforce();
    solveusingslidingwindow();
    return 0;
}
