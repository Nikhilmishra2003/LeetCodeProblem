class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int A = 1,B = 1,C = 1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                B++;
                A=max(A,B);
                C=1;
            }
            else if(nums[i]<nums[i-1]){
                C++;
                A=max(A,C);
                B=1;
            }
            else{
                C=1;
                B=1;
            }
        }
         return A;  
    }
};