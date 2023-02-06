class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
   
   vector<int>result;
   sort(nums.begin(),nums.end());
   for(int i=0;i<nums.size()/2;i++){
       result.push_back(nums[i]);
       result.push_back(nums[nums.size()-1-i]); 
   }
   if(nums.size()&1)result.push_back(nums[nums.size()/2]);
   return result;
    }
};
