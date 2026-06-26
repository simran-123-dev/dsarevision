class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map <int,int>mp;
        for(int i=0;i<nums.size();i++){
            int need= target- nums[i];
            if(mp.count(need)) return {mp[need],i};
            mp[nums[i]]=i;
        }
        return {};
        // int n = nums.size();
        // vector<int> ans;

        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] + nums[j] == target) {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans; 
        //         }
        //     }
        // }
        // return ans; 

        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     int need= target-nums[i];
        //     if(mp.count(need)) return {mp[need],i};
        //     mp[nums[i]]=i;
        
        // }
        // return{};
    }
};
