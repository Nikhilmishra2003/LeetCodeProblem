class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int z = x;
        while(z>0){
            sum+=(z%10);
            z=z/10;
        }
        if(x%sum==0){
            return sum;
            
        }
        return -1;
    }
};