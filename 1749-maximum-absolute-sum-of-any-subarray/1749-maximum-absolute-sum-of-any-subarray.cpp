class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int currentProfit=0;
        int bestProfit= INT_MIN;

        int currentLoss=0;
        int bestLoss=INT_MAX;

        for(int x:nums){
            currentProfit=max(x,currentProfit+x);
            bestProfit=max(bestProfit,currentProfit);

            currentLoss=min(x,currentLoss+x);
            bestLoss=min(bestLoss,currentLoss);
        }

        return max(abs(bestProfit),abs(bestLoss));

        
    }
};