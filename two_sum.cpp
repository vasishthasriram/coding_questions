class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int index=0;
        for(auto i:nums)
            m[i]=index++;
        for(int i=0;i<nums.size();i++)
        {
            if(i==m[target-nums[i]])
                continue;
            if(m[target-nums[i]])
                return {i,m[target-nums[i]]};
        }
    }
};
