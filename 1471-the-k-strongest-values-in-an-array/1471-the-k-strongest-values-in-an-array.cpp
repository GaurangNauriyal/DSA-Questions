class Solution {
public:
    vector<int> getStrongest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        n=n-1;
        int median=nums[n/2];
        int i=0;
        int j=nums.size()-1;
        vector<int>ans;
        while(i<=j){
            int n1=abs(nums[i]-median);
            int n2=abs(nums[j]-median);
            if(n1==n2){
                if(nums[i]>nums[j]){
                    ans.push_back(nums[i]);
                    i++;
                }
                else{
                    ans.push_back(nums[j]);
                    j--;
                }
            }
            else if(n1>n2){
                ans.push_back(nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j]);
                j--;
            }
            if(ans.size()==k)return ans;  
        }
        return {};
    }
};