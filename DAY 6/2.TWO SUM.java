class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        for(int i = 0;i< nums.length;i++){
            int num1 = nums[i];
            for(int x = i+1;x< nums.length;x++){
                int num2 = nums[x];
                if(num1 + num2 == target){
                    int[] result = {i,x};
                    return result;
                }
            }
        }
        return null;
    }
}
