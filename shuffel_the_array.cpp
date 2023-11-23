class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      int mid = nums.size()/2;
     
    
    vector <int>ans;

    for (int i = 0;i<mid;i++){
ans.push_back(nums[i]);
ans.push_back(nums[mid+i]);

    }
    
    return ans;

       
    }


    
};
