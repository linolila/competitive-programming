class Solution {
public:
    int maxFrequency(vector<int>& nums, long k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0;
        int result=0;
        for(int i=0;i<n;i++){
         k+=nums[i];
         while(k<(long)nums[i]*(i-left+1)){
             k-=nums[left];
             left++;
         }
         result=max(result,i-left+1);
        }

return result;
    }
};
