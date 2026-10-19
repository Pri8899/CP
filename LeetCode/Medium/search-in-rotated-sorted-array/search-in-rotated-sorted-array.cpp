class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto i=find(nums.begin(),nums.end(),target);
        if(i!=nums.end())
        {
            return i-nums.begin();
        }
        else
        {
            return -1;
        }
    }
};