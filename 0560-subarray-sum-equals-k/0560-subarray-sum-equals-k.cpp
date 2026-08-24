class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int sum=0;
        int count=0;

        freq[0]=1;
        for(int x:nums){
            sum+=x;
            int quest=(sum-k);
            if (freq[quest]){
                count+=freq[quest];
            }
            
            freq[sum]++;
        }
        return count;
        
    }
};