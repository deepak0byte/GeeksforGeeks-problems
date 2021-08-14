#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n-- > 0)
    {
        int t;
        cin >> t;
        int arr[t];
        for (int i = 0; i < t; i++){
            cin >> arr[i];
        }
        reverse(arr, arr + t);

        for (int i = 0; i < t; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}