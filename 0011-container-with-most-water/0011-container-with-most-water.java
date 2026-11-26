class Solution {
    public int maxArea(int[] height) {
        int i=0;
        int j=height.length-1;
        int Area=0;
        int h;
        int w; 
        while(i<j){
            h = Math.min(height[i],height[j]);
            w = j-i;
            Area=Math.max(Area,h*w);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return Area;
    }
}