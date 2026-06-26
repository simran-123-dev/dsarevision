class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int> seen;
        for(int el:nums){
            if(seen.find(el) != seen.end()) return true;
            else{
                seen.insert(el);
            }
        }
        return false;
    }
};
