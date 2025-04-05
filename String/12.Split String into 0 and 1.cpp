class Solution {
    public:
        int maxSubStr(string str) {
            int c = 0;
            int count1 = 0;
            int count0 = 0;
    
            for (int i = 0; i < str.length(); i++) {
                if (str[i] == '0') {
                    count0++;
                } else {
                    count1++;
                }
    
                if (count0 == count1) {
                    c++;
                }
            }
    
            if (count0 != count1) {
                return -1;
            }
    
            return c;
        }
    };
    