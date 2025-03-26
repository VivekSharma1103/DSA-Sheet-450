class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> result;
            result.reserve(nums1.size() + nums2.size()); // Reserve space
    
            // Merge both vectors
            int i = 0, j = 0;
            while (i < nums1.size() && j < nums2.size()) {
                if (nums1[i] < nums2[j]) {
                    result.push_back(nums1[i++]);
                } else {
                    result.push_back(nums2[j++]);
                }
            }
    
            // Add remaining elements
            while (i < nums1.size()) {
                result.push_back(nums1[i++]);
            }
            while (j < nums2.size()) {
                result.push_back(nums2[j++]);
            }
    
            int total = result.size();
            if (total % 2 == 0) {
                return (result[total / 2 - 1] + result[total / 2]) / 2.0;
            } else {
                return result[total / 2];
            }
        }
    };