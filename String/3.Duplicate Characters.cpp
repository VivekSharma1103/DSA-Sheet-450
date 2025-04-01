vector<pair<char,int>> duplicate_char(string s, int n){
    // Write your code here.
    vector<pair<char,int>> ans;
    unordered_map<char,int> freq;

    for(char &i:s){
        freq[i]++;
    }
    for(auto &s:freq){
        if(s.second>1){
            ans.push_back({s.first,s.second});
        }

    }
    sort(ans.begin(),ans.end());
    return ans;
}