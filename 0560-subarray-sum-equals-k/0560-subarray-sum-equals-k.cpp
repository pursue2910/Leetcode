class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Empty prefix
        freq[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int x : nums) {
            prefixSum += x;

            // Number of previous prefix sums that make
            // the current subarray sum equal to k
            if (freq.count(prefixSum - k)) {
                count += freq[prefixSum - k];
            }

            freq[prefixSum]++;
        }

        return count;
    }
};