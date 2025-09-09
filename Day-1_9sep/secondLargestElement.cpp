
#include <bits/stdc++.h>
using namespace std;
// Brout froce :
int main()
{
        cout << "Number of element in array" << endl;
        int n;
        cin >> n;

        vector<int> arr(n, INT_MIN);

        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int largest = arr[n - 1], slargest = -1;
        for (int i = n - 2; i >= 0; i--)
        {
                if (arr[i] != largest)
                {
                        slargest = arr[i];
                        break;
                }
        }
        cout << slargest;
        return 0;
}

// Better:
int main()
{
        cout << "Number of element in array" << endl;
        int n;
        cin >> n;

        vector<int> arr(n, INT_MIN);

        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        int largest = arr[0];
        for (int i = 1; i < n; i++)
        {
                if (arr[i] > largest)
                {
                        largest = arr[i];
                }
        }
        int slargest = INT_MIN;
        for (int i = 0; i < n; i++)
        {
                if (arr[i] > slargest && arr[i] != largest)
                {
                        slargest = arr[i];
                }
        }
        cout << slargest;
        return 0;
}

// Optimal

int main()
{
        cout << "Number of element in array" << endl;
        int n;
        cin >> n;

        vector<int> arr(n, INT_MIN);

        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
        int largest = arr[0], slargest = INT_MIN;
        for (int i = 1; i < n; i++)
        {
                if (arr[i] > largest)
                {
                        slargest = largest;
                        largest = arr[i];
                }
                if (arr[i] > slargest && arr[i] != largest)
                {
                        slargest = arr[i];
                }
        }
        cout << slargest;
        return 0;
}
