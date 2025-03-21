class Solution {
    public:
        int count = 0;
    
        int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
            int i = left, j = mid, k = 0;
            vector<int> temp(right - left + 1);
            int inv_count = 0;
            
            while (i < mid && j <= right) {
                if (arr[i] <= arr[j]) {
                    temp[k++] = arr[i++];
                } else {
                    temp[k++] = arr[j++];
                    inv_count += (mid - i);  
                }
            }
    
            while (i < mid) {
                temp[k++] = arr[i++];
            }
    
            while (j <= right) {
                temp[k++] = arr[j++];
            }
    
            for (int i = left, k = 0; i <= right; i++, k++) {
                arr[i] = temp[k];
            }
    
            return inv_count;
        }
    
        int mergeSortAndCount(vector<int>& arr, int left, int right) {
            if (left >= right) return 0;
            int mid = left + (right - left) / 2;
            int inv_count = 0;
            inv_count += mergeSortAndCount(arr, left, mid);
            inv_count += mergeSortAndCount(arr, mid + 1, right);
            inv_count += mergeAndCount(arr, left, mid + 1, right);
            return inv_count;
        }
    
        int inversionCount(vector<int> &arr) {
            count = mergeSortAndCount(arr, 0, arr.size() - 1);
            return count;
        }
    };