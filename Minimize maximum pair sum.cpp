class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end()); 
    int sum=0;
        int maxSum=INT_MIN;
        int i=0;
        int n=nums.size();
        int size=(n/2)-1;
        while(i<=size){
            sum=nums[i]+nums[n-i-1];
            maxSum=max(sum,maxSum);
            i++;
        }
        return maxSum;
    }
};   
