public class RemoveDuplicatesfromSortedArray_II_80{
  public int removeDuplicates(int[] nums) {
    int l = 0;
    int r = 0;

    while(r < nums.length){
      int count = 0;
      while(nums[r] == nums[r+1] && r+1 < nums.length){
        count++;
        r++;
      }
      int maxi = Math.min(2, count);
      while(maxi != 0){
        nums[l] = nums[r];
        l++;
        maxi--;
      }
      r++;
    }
    return l;
  }
}