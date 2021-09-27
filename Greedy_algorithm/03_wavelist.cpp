using namespace std;
#include<iostream>
#include<vector>
#include <algorithm>

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        if (nums.size() == 2 && nums[0] != nums[1])
        { 
            return 2;
        }
        else if (nums.size() == 2 && nums[0] == nums[1])
        {
            return 1;
        }
        int result = 1;
        int curDiff = 0;
        int preDiff = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            curDiff = nums[i + 1] - nums[i];
            if ((curDiff > 0 && preDiff <= 0) || (curDiff < 0 && preDiff >= 0))
            {
                result++;
                preDiff = curDiff;
            }
        }
        return result;
    }
};