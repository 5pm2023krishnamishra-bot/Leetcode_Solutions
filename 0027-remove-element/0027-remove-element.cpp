class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
           if(nums.at(i)==val){
            for(int m=i;m<size-1;m++){
                nums.at(m)=nums.at(m+1);
            }
            nums.pop_back();
           size--;
           i--; //fix.
           }
        }
        k=size;
        return k;

    }
};