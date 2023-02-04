class Solution {
public:
 static bool _comp(int a, int b){
        ostringstream ss;
        ss << a;
        string sa = ss.str();
        ss.clear();
        ss << b;
        string sb = ss.str();
        ss.clear();
        
        sa = sa + sb;
        sb = sb + sa;
        
        if (sa.compare(sb) >=0){
            return true;
        }else{
            return false;
        }
    }

    string num2str(int i){
        ostringstream ss;
        ss << i;
        return ss.str();
    }
    
    string largestNumber(vector<int> &num) {
        
        string res="";
        
        sort(num.begin(),num.end(), _comp);
        
        if (num[0]==0){return "0";}
        
        for(int i=0;i<num.size();i++){
            res = res+ num2str(num[i]);
        }
        
        return res;
    }};
