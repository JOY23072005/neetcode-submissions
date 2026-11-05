class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_set<int> s;
        set<vector<int>> set_ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(s.count(-(nums[i]+nums[j]))){
                    vector<int> temp = {-(nums[i]+nums[j]),nums[i],nums[j]};
                    sort(temp.begin(),temp.end());
                    set_ans.insert(temp);
                }
            }
            s.insert(nums[i]);
        }
        vector<vector<int>> ans;
        for(auto& it : set_ans){
            ans.push_back(it);
        }

        return ans;
    }
};
