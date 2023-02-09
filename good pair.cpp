class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
int total=0;
map<int,int>mp;
for(int i=0;i<nums.size();i++){
    total+=mp[nums[i]];
    mp[nums[i]]++;
}
return total;
    }
};
