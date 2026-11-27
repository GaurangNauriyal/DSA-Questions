class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>temp;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int k=i;k<=j;k++){
                    temp.insert(nums[k]);
                }
                ans+=(temp.size()*temp.size());
            }
            temp.clear();
        }
        return ans;
    }
};