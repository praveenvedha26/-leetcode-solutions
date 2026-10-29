class Solution {
    public int maxProfit(int[] prices) {
        int min=prices[0];
        int max=Integer.MIN_VALUE;
        for(int i:prices){
           max=Math.max(max,i-min);
           min=Math.min(min,i);
        }
        return max;
    }
}