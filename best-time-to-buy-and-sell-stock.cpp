// link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=prices[0];
        int maxPosition=0,minPosition=0, profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
                minPosition=i;
            }
            if(prices[i]>max){
                max=prices[i];
                maxPosition=i;
            }
            if(minPosition<maxPosition && (max-min)>profit){
                profit=max-min;
            }else if(minPosition>maxPosition){
                max=min;
            }
            
        }
        return profit;
    }
};