class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int Element=nums[0];
        int count=0;
        for (int i=1;i<nums.size();i++){
            if (Element<nums[i]){
                Element=nums[i];
                count+=1;
                nums[count]=Element;
            }
        };
        return count+1;
    }
};