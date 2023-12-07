import java.util.*;

public class MajorityElement169 {
  public static void majorityElement(int[] nums) {
    HashMap<Integer, Integer> hs = new HashMap<Integer, Integer>();
    int ans = 0;
    int maxi = 0;
    
    for (int i = 0; i < nums.length; i++) {
      if (!hs.containsKey(nums[i])) {
        hs.put(nums[i], 1);
      } else {
        hs.put(nums[i], hs.get(nums[i]) + 1);
      }
      maxi = Math.max(maxi, hs.get(nums[i]));
      if (maxi > nums.length / 2) {
        ans = nums[i];
      }
    }
    System.out.println(ans);
  }

  public static void main(String[] args) {
    int[] nums = new int[] {2,2,1,1,1,2,2};
    majorityElement(nums);
  }
}