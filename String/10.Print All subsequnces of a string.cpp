// Approach -1


// 1. Recursion


void printSubsequences(string input, string output, int index) {
    if (index == input.length()) {
        cout << output << endl;
        return;
    }
    
    // Include the current character
    printSubsequences(input, output + input[index], index + 1);
    
    // Exclude the current character
    printSubsequences(input, output, index + 1);
}


// Approach -2



void printSubsequences(string str) {
    int n = str.length();
    int total = 1 << n; // 2^n
    
    for (int mask = 0; mask < total; mask++) {
        string subseq = "";
        
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { // Check if the i-th bit is set
                subseq += str[i];
            }
        }
        
        cout << subseq << endl;
    }
}

int main() {
    string str = "abc";
    printSubsequences(str);
    return 0;
}

