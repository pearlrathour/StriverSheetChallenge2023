class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size();
        int count=0,ele;

        for(int i=0; i<l; i++){
            if(count==0)
                ele=nums[i];
            if(nums[i]==ele)
                count++;
            else
                count--;
        }

        for(int i=0; i<l; i++){
            if(nums[i]==ele){
                count++;
                if(count > (l/2))
                    return ele;
            }
        }
        return ele;
    }
};