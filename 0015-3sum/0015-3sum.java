class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        HashSet<ArrayList<Integer>>hashset=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            HashSet<Integer>set=new HashSet<>();
            for(int j=i+1;j<nums.length;j++){
                int k = -(nums[i]+nums[j]);
                if(set.contains(k)){
                    ArrayList<Integer>list=new ArrayList<>();
                    list.add(nums[i]);
                    list.add(nums[j]);
                    list.add(k);
                    Collections.sort(list);
                    hashset.add(list);
                }
                set.add(nums[j]);
            }
        }
        List<List<Integer>>result = new ArrayList<>(hashset);
        return result;
    }
}