class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto el : nums){
            if(s.find(el)!=s.end()) return true;
            else s.insert(el);
        }
        return false;
    }
};