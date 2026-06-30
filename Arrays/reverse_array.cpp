#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(int nums[], int N, int K)
{
    K = K % N;

    vector<int> ans(N);

    for(int i = 0; i < K; i++)
    {
        ans[i] = nums[N - K + i];
    }

    int index = 0;

    for(int i = K; i < N; i++)
    {
        ans[i] = nums[index++];
    }

    return ans;
}

int main()
{
    int array[] = {1,2,3,4,5};

    int N = sizeof(array)/sizeof(array[0]);

    int K = 2;

    vector<int> ans = rotate(array, N, K);

    for(int i = 0; i < N; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
