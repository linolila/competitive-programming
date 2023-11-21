class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
     for(int d = 1;d<num;d++) {
         if(num% d ==0){

             
 sum +=d;
             
            }
}
 return sum==num;
    }
 
       
        };
