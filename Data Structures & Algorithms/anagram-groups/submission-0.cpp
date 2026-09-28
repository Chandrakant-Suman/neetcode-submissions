class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto str : strs){
            string s=str;
            sort(begin(s),end(s));
            if(m.find(s)!=m.end()){
                m[s].push_back(str);
            }
            else{
                m[s].push_back(str);
            }
        }
        vector<vector<string>> ans;
        for(auto p : m){
            ans.push_back(p.second);
        }
        return ans;
    }
};
