#include<iostream>
#include<vector>
using namespace std;

int findMissing(vector<int>& arr, int n)
{
    long long total = 1LL * n * (n + 1) / 2;
	long long sum = 0;

    for(int i = 0; i < n-1; i++)
    {
        sum += arr[i];
    }

    return total - sum;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    vector<int> arr(n-1);
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }

    cout << findMissing(arr, n) << endl;

    return 0;
}
