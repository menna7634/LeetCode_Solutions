class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numBottles<numExchange )
        {
            return numBottles;
        } else if(numBottles==numExchange) {
        return numBottles +1;
        } else {
        int res=numBottles;  // 9
        while(numBottles/numExchange!=0)
        {
            res+=numBottles/numExchange; 
            int temp=numBottles; 
            numBottles=numBottles%numExchange;//0       
            numBottles+=temp/numExchange;//0+3=3     
        }
        return res;
        }
       
    }
};