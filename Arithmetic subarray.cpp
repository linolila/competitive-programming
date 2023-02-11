class Solution {
public:
bool isArithmetic(vector<int>& store){
int n=store.size();
if(n==2)
return true;
int s=store[1]-store[0];
for(int i=2;i<n;i++){
    if(store[i]-store[i-1]!=s)
    
    return false;
}
    return true;
    

}

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
       
       int m=l.size();
       vector<bool>result;
      for(int i=0;i<m;i++) {
int x=l[i];
int y=r[i];
vector<int>store;
for(int j=x;j<=y;j++)
{
    store.push_back(nums[j]);
}
sort(store.begin(),store.end());
if(isArithmetic(store))

    result.push_back(true);
else
    result.push_back(false);

      }
      return result; 
        
    }
};
