class Solution {
    public:
        double medianOf2(vector<int>& a, vector<int>& b) {
            int n = a.size();
            int i = 0, j = 0, count = 0;
            int m1 = -1, m2 = -1;
    
            // We need (n + n) / 2 + 1 = n elements to reach the median point
            for (count = 0; count <= n; count++) {
                if (i != n && (j == n || a[i] <= b[j])) {
                    m1 = m2;
                    m2 = a[i];
                    i++;
                } else {
                    m1 = m2;
                    m2 = b[j];
                    j++;
                }
            }
    
            
            return (m1 + m2) / 2.0;
        }
    };