class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;

        for(int i=0;i<strs.size();i++){
            string st = strs[i];
            sort(st.begin(),st.end());
            hash[st].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto [_,val]:hash){
            ans.push_back(val);
        }

        return ans;
    }
};
