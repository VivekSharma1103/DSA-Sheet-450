class Solution {
    public:
        int maxProfit(vector<int>& prices) {
           
            int maxx=0,minn=prices[0];
            for(int i:prices){
               
                maxx = max(maxx,i-minn);
                 minn = min(minn,i);
            }
            return maxx;
        }
    };