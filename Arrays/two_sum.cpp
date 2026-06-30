#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
	int n = nums.size();
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(nums[i]+nums[j]==target)
			{
				return{i,j};
			}
		}
	}
	return{};
}
int main()
{
	vector<int> nums = {2,5,6,7};
	int target = 8;
	
	vector<int>ans = twoSum(nums, target);
	
	cout<<ans[0]<<" "<<ans[1];
	return 0;
}
