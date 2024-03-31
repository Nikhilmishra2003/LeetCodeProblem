class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long answer=0;
        int n = nums.size();
        int cnt = 0;
        int pr=-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=pr){
                cnt++;
            }else{
                cnt=1;
            }
            pr=nums[i];
            answer+=cnt;
        }
        return answer;
    }
};