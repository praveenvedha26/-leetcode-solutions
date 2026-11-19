class Solution {
    public int maxProduct(int[] nums) {
        int max = Integer.MIN_VALUE;
        int count = 1;
        for(int i:nums){
            count*=i;
            max=Math.max(max,count);
            if(i==0){
                count=1;
            }
        }
        count=1;
        for(int i=nums.length-1;i>=0;i--){
            count*=nums[i];
            max=Math.max(max,count);
            if(nums[i]==0){
                count=1;
            }
        }
        return max;
    }
}