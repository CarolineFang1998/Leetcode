#include "general_include.hpp"
using namespace std;
//This is the first github commit for NiuNiu
void printVector(vector<int> nums)
{
    for(auto i:nums)
    {
        cout<<i<<endl;
    }
}

vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int> res;
        res[nums[0]]=0;
        vector<int> answer(2);
        for(int i=1;i<n;i++)
        {
            int temp = target - nums[i];
            if(res.count(temp)==1)
            {
                answer[0]=res[temp];
                answer[1] =i ;
            }
            res[nums[i]]=i;
        }
        printVector(answer);
        return answer;
    }

int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    twoSum(nums,6);
}
