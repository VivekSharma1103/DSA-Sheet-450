int palindrome(vector<int>& A) {
    int N = A.size();
    int i = 0, j = N - 1, ans = 0;
    int left = A[0], right = A[N - 1];

    while (i < j) {
        if (left == right) {
            i++;
            j--;
            left = A[i];
            right = A[j];
        }
        else if (left < right) {
            ans++;
            left += A[i + 1];
            i++;
        }
        else {
            ans++;
            right += A[j - 1];
            j--;
        }
    }

    return ans;
}