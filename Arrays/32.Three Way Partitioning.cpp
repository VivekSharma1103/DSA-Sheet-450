class Solution {
    public:
        void threeWayPartition(vector<int>& arr, int a, int b) {
            int low = 0, high = arr.size() - 1;
            int i = 0;
            
            while (i <= high) {
                if (arr[i] < a) {
                    swap(arr[i], arr[low]);
                    low++;
                    i++;
                } else if (arr[i] > b) {
                    swap(arr[i], arr[high]);
                    high--;
                } else {
                    i++;
                }
            }
        }
    };
    