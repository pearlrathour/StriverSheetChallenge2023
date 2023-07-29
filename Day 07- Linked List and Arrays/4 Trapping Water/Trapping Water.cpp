class Solution {
public:
    int trap(vector<int>& height) {
        int s=height.size();
        int water=0;
        int left=0, right=s-1, leftmax=0, rightmax=0;

        while(left <= right){
            if(height[left] <= height[right]){
                if(height[left] >= leftmax)
                    leftmax=height[left];
                else
                    water+=leftmax-height[left];
                left++;
            }
            else{
                if(height[right] >= rightmax)
                    rightmax=height[right];
                else
                    water+=rightmax-height[right];
                right--;
            }
        }
        return water;
    }
};