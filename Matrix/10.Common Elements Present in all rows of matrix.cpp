
vector<int> findCommonElements(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    unordered_map<int, int> freq;
    vector<int> result;

    
    for (int j = 0; j < m; j++) {
        freq[mat[0][j]] = 1;
    }


    for (int i = 1; i < n; i++) {
        unordered_map<int, int> rowMap;
        for (int j = 0; j < m; j++) {
            int val = mat[i][j];

            
            if (freq[val] == i) {
                rowMap[val] = 1;
            }
        }

        
        for (auto &pair : rowMap) {
            freq[pair.first]++;
        }
    }

    
    for (auto &pair : freq) {
        if (pair.second == n) {
            result.push_back(pair.first);
        }
    }

    return result;
}
