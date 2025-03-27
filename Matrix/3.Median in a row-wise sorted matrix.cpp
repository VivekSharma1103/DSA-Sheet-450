int median(vector<vector<int>> &mat) {
    int r = mat.size();
    int c = mat[0].size();

    int minVal = INT_MAX, maxVal = INT_MIN;
  
    // Finding the minimum and maximum elements in the matrix
    for (int i = 0; i < r; i++) {
        if (mat[i][0] < minVal)
            minVal = mat[i][0];
        if (mat[i][c - 1] > maxVal)
            maxVal = mat[i][c - 1];
    }

    int desired = (r * c + 1) / 2;
    int lo = minVal, hi = maxVal;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        int place = 0;

        // Count elements smaller than or equal to mid
        for (int i = 0; i < r; ++i)
            place += upper_bound(mat[i].begin(), mat[i].end(), mid)
                     - mat[i].begin();
        
        // Adjust the range based on the count of elements found
        if (place < desired)
            lo = mid + 1;
        else
            hi = mid;
    }
    return lo;
}