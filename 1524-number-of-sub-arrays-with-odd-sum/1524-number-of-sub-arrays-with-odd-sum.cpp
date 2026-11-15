class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1000000007;
        int odd = 0,even = 1;
        int total = 0;
        int sum = 0;
        for(int ele : arr){
            sum += ele;
            if(sum % 2 == 1){
                total = (total+even) % MOD;
                odd++;
            }
            else{
                total = (total+odd) % MOD;
                even++;
            }
        }
        return total;
    }
};