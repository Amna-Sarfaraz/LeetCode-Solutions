class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;

        vector<int>output;
        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(m.find(complement)!=m.end()){
                output.push_back(i);
                output.push_back(m[complement]);
                return output;
            }
         
            m[nums[i]]=i;
        }

        return output;
        
    }
};