class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i+=2){
            int ele = nums[i+1];
            int freq = nums[i];
            while(freq--){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};