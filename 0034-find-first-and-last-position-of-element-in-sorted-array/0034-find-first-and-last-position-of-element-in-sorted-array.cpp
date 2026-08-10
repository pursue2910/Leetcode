class Solution {
public:
    int firstPosition(vector<int>& nums, int target ){
        int start =0;
        int end =nums.size()-1;
        int ans =-1;

        int mid = (start+end)/2;

        while (start<=end){
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if (target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return ans;
    }

    int lastPosition(vector<int>& nums,int target){
        int start =0;
        int end =nums.size()-1;
        int ans =-1;

        int mid = (start+end)/2;

        while (start<=end){
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if (target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return ans;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstPosition(nums,target),lastPosition(nums,target)};
          

        
    }
};