class Solution {
    static int[] rotation(int[]nums,int l,int r){
        while(l<r){
            int t = nums[l];
            nums[l]=nums[r];
            nums[r]=t;
            l++;
            r--;
        }
        return nums;
    }
    public void rotate(int[] nums, int k) {
        int n=nums.length;
        k=k%nums.length;
        //rotate entire array
        rotation(nums,0,n-1);
        //rotate first k elements
        rotation(nums,0,k-1);
        //rotate after k elements
        rotation(nums,k,n-1);
        
    }
}