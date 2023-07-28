class Solution {
public:
    int trap(vector<int>& height) {
        int s=height.size();
        int water=0;
        vector<int>rightmax(s), leftmax(s);

        rightmax[s-1]=height[s-1];
        for(int i=s-2; i>=0; i--){
            rightmax[i]=max(height[i],rightmax[i+1]);
        }
        leftmax[0]=height[0];
        for(int i=1; i<s; i++){
            leftmax[i]=max(height[i],leftmax[i-1]);
        }

        for(int i=0; i<s; i++){
            water+=min(leftmax[i], rightmax[i])-height[i];
        }

        return water;
    }
};