import java.util.*;

class removeDuplicates {
  public static int remove(int[] nums) {

    HashMap<Integer, Integer> hs = new HashMap<Integer, Integer>();
    for (int i = 0; i < nums.length; i++) {
      if (!hs.containsKey(nums[i])) {
        hs.put(nums[i], 1);
      } else {
        hs.put(nums[i], hs.get(nums[i]) + 1);
      }
    }
    
    List<Integer> keys = new ArrayList<Integer>(hs.keySet());
    Collections.sort(keys);

    int counter = 0;
    for (Integer key : keys) {
      if (counter == nums.length) {
        break;
      }
      nums[counter] = key;
      counter++;
    }
    int len = hs.size();
    return len;
  }
}