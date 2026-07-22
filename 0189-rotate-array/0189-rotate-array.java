class Solution {
    public void rotate(int[] nums, int k) {
        ArrayList<Integer>arr = new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            arr.add(0);
        }
        for(int i=0;i<nums.length;i++){
            arr.set((i+k)%nums.length,nums[i]);
        }
        for(int i=0;i<nums.length;i++){
            nums[i] = arr.get(i);
        }
    }
}