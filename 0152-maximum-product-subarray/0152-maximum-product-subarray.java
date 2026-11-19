class Solution {
    public int maxProduct(int[] nums) {
        int max = Integer.MIN_VALUE;
        int count = 1;
        for(int i:nums){
            count*=i;
            max=Math.max(max,count);
        
        }
        count=1;
        for(int i=nums.length-1;i>=0;i--){
            count*=nums[i];
            max=Math.max(max,count);
         
        }
        return max;
    }
}