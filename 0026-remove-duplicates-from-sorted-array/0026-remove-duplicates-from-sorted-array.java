class Solution {
    public int removeDuplicates(int[] nums) {
        Set<Integer>st = new HashSet<>();
        for(int i=0;i<nums.length;i++){
            st.add(nums[i]);
        }
        int k = 0;
        for(int x:st){
            nums[k++] = x;
        }
        Arrays.sort(nums,0,k);
        return k;
    }

}