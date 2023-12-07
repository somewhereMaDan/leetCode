
public class RotateArray_189 {
  public static void reverse(int[] nums, int start, int end){
    while (start < end) {
      int temp = nums[start];
      
      nums[start] = nums[end];
      nums[end] = temp;
      start++;
      end--;
    }
  }
  public static void rotate(int[] nums, int k) {
    int n = nums.length;
    k = k % n;

    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);

    /* This commented solution will not work for big array */
    // while (k != 0) {
    //   int temp = nums[nums.length - 1];
    //   for (int i = nums.length - 1; i > 0; i--) {
    //     nums[i] = nums[i - 1];
    //   }
    //   nums[0] = temp;
    //   k--;
    // }
    // for (int n : nums) {
    //   System.out.print(n + " ");
    // }
  }

  public static void main(String[] args) {
    int[] nums = new int[] { -1, -100, 3, 99 };
    rotate(nums, 2);
    for (int n : nums) {
      System.out.print(n + " ");
    }
  }
}
