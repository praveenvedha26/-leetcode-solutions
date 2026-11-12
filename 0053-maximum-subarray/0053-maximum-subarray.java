class Solution {
    public int maxSubArray(int[] nums) {
        int k = 0;
        int max = Integer.MIN_VALUE;
        for(int i:nums){
            k+=i;
            max = Math.max( max , k);
            if(k<0){
                k=0;
            }
        }
        return max;
    }
}