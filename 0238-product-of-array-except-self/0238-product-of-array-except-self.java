class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[]arr=new int[nums.length];
        int product = 1;
        arr[0]=1;
        for(int i=1;i<nums.length;i++){
            product=product*nums[i-1];
            arr[i]=product;
        }
        product=1;

        for(int i=nums.length-2;i>=0;i--){
            product=product*(nums[i+1]);
            arr[i]*=product;
        }
        return arr;
    }
}