#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int majorityElements(vector<int> nums)
{
	unordered_map<int,int>mp;
	
	for(int x : nums)
	mp[x]++;
	
	int n = nums.size();
	
	for(auto it : mp)
	{
		if(it.second > n/2)
		{
			return it.first;
		}
	}
	
	return -1;
}
int main()
{
	vector<int> nums = {2,2,1,1,2,1,2};
	cout<<majorityElements(nums);
}
