class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int count;
       vector<int>result;
       for (int i =0;i<nums.size();i++) {
           count =0;
           for(int j=0;j<nums.size();j++)
           {
               if(j!=i)
               {
                   if(nums[j]<nums[i])
                   {
                       count++;
                   }
               }
               
           }
           result.push_back(count);
       }
       return result;
    }
};
