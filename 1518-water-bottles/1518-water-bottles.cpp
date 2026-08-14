class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,empty=0;
        while(numBottles>=numExchange){
           ans+=numBottles/numExchange;
           int t=numBottles;
           numBottles=numBottles/numExchange;
           numBottles+=t%numExchange;
           
        }
        return ans;
    }
};