class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
           t
            sort(intervals.begin(), intervals.end());
            
            vector<vector<int>> ans;
            
            for (int i = 0; i < intervals.size(); i++) {
                int start = intervals[i][0];
                int end = intervals[i][1];
                
               
                for (int j = i + 1; j < intervals.size(); j++) {
                    int jstart = intervals[j][0];
                    int jend = intervals[j][1];
                    
                    if (jstart <= end) {
                        end = max(end, jend);
                        i = j; 
                    } else {
                        break; 
                    }
                }
                
               
                ans.push_back({start, end});
            }
            
            return ans;
        }
    };
    