class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        int freq[2001] = {0};

        // Count frequency of each value
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i] + 1000]++;
        }

        // Check if any frequency is repeated
        bool occurrence[1001] = {false};

        for (int i = 0; i < 2001; i++) {

            if (freq[i] != 0) {

                if (occurrence[freq[i]])
                    return false;

                occurrence[freq[i]] = true;
            }
        }

        return true;
    }
};