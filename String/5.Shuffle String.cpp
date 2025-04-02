

using namespace std;

// Function to check if the length of the result string
// is equal to the sum of the two strings
bool checkLength(const string& first, const string& second, const string& result) {
    return (first.length() + second.length() == result.length());
}

// Function to sort a string
string sortString(string str) {
    sort(str.begin(), str.end());
    return str;
}

// Function to check if the result is a valid shuffle of first and second
bool shuffleCheck(string first, string second, string result) {
    // Sort each string to make comparison easier
    first = sortString(first);
    second = sortString(second);
    result = sortString(result);

    // Variables to track each character of the three strings
    int i = 0, j = 0, k = 0;

    // Iterate through all characters of result
    while (k != result.length()) {
        // Check if first character of result matches with first string
        if (i < first.length() && first[i] == result[k])
            i++;
        // Check if first character of result matches with second string
        else if (j < second.length() && second[j] == result[k])
            j++;
        // If character doesn't match
        else
            return false;
        
        // Move to next character of result
        k++;
    }

    // After accessing all characters of result
    // if either first or second has some characters left
    return (i >= first.length() && j >= second.length());
}

int main() {
    string first = "XY";
    string second = "12";
    string results[] = {"1XY2", "Y1X2", "Y21XX"};

    // Call the method to check if result string is a valid shuffle
    for (const string& result : results) {
        if (checkLength(first, second, result) && shuffleCheck(first, second, result)) {
            cout << result << " is a valid shuffle of " << first << " and " << second << endl;
        } else {
            cout << result << " is not a valid shuffle of " << first << " and " << second << endl;
        }
    }
    return 0;
}
