class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int num:nums){
            s.insert(num);
        }

        int longest =0;
        for(int n: nums){
            if(!s.count(n-1)){
                //start of sequence?
                int length=0;
                while(s.count(n+length)){
                    length++;
                }
                longest = longest<length?length:longest;
            } 
        }
        return longest;
    }
};
