class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for(int i =left;i<=right;i++){
            if(isSelfDividing(i)){
                result.push_back(i);
            }
        }
        return result;
    }
 private:
 bool isSelfDividing(int num){
     int original = num;
while(num>0){
int d = num %10;
if(d ==0 || original % d !=0){
    return false;
}
num/=10;
}
return true;
 }      

 
   
};
