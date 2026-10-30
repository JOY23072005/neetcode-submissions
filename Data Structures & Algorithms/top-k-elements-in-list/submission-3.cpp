class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==0 || k==0) return {};
        if(nums.size()==1) return {nums[0]};
        

        sort(nums.begin(),nums.end());

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>    minHeap;
        int count=1;
        int num = nums[0];
        for(int i=1;i<nums.size();i++){
            if(num==nums[i]){
                count++;
            }else{
                minHeap.push({count,nums[i-1]});
                if(minHeap.size()>k){
                    minHeap.pop();
                }

                num = nums[i];
                count=1;
            }
        }

        minHeap.push({count,num});
        if(minHeap.size()>k){
            minHeap.pop();
        }

        vector<int> ans;
        while(!minHeap.empty()){
            auto [first,second] = minHeap.top();
            cout<<second<<" : "<<second<<endl;
            minHeap.pop();
            ans.push_back(second);
        }

        return ans;
    }
};
