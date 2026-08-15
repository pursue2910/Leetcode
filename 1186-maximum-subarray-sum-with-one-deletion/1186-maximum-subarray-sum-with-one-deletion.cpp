class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        int noDel = arr[0];
        int oneDel = INT_MIN;
        int res = arr[0];

        for (int i = 1; i < n; i++) {
            int prevNoDel = noDel;
            int prevOneDel = oneDel;

            noDel = max(arr[i], prevNoDel + arr[i]);

            if (prevOneDel == INT_MIN) {
                oneDel = prevNoDel;
            } else {
                oneDel = max(prevOneDel + arr[i], prevNoDel);
            }

            res = max(res, max(noDel, oneDel));
        }

        return res;
    }
};