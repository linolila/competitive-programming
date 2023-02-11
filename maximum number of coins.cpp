class Solution {
public:
    int maxCoins (vector<int>piles) {
      sort(piles.begin(),piles.end());
      int j=0;
      int n=piles.size();  
      int coins=0;
      for(int i=n-2;i>0;i-=2){
          coins+=piles[i];
          if(++j==n/3){
              return coins;
          }
      }
      return coins;
    }
};
