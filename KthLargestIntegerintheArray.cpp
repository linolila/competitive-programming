class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
      
        
        struct Compare {
            bool operator() (string& lhs, string &rhs) { return lhs.size() > rhs.size() || (lhs.size() == rhs.size() && lhs > rhs); }
        }; 
        
        priority_queue<string, vector<string>, Compare> pq; 
        for (auto& x : nums) {
            pq.push(x); 
            if (pq.size() > k) pq.pop(); 
        }
        return pq.top(); 
    }

          
       
    
};
