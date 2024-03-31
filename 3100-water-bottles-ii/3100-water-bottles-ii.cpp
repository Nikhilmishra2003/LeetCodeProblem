class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int cnt = numBottles;
        int answer = numBottles;
        while(answer>=numExchange){
            answer-=numExchange;
            answer++;
            cnt++;
            numExchange++;
            cout<<cnt<<" "<<answer<<endl;
        }
        return cnt;
    }
};