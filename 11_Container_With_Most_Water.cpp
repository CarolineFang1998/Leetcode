#include "general_include.hpp"
using namespace std;

int maxArea(vector<int>& height) {
        int n = height.size();
        int res = 0;
        int temp = 0;
        int i = 0;
        int j = n-1;
        while(i<j)
        {
            temp = (j-i)*min(height[i],height[j]);
            res = max(res,temp);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        cout<<res<<endl;
        return res;
    }

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    maxArea(nums);
}