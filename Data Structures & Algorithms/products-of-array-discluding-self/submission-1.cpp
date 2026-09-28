class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int zeroCount=0;
        for(int el : nums){
            if(el==0) zeroCount++;
        }
        int p=1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) p*=nums[i];
        }
        vector<int> ans(n,0);
        if(zeroCount>1) return ans;
        for(int i=0;i<n;i++){
            if(zeroCount==1 && nums[i]!=0){
                ans[i]=0;
            }
            else if(zeroCount==0 && nums[i]!=0){
                ans[i]=p/nums[i];
            }
            else{
                ans[i]=p;
            }
        }
        return ans;
    }
};
