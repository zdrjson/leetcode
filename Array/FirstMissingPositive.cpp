Solution: Marking
First pass, marking nums[i] to INT_MAX if nums[i] <= 0
Second pass, use a negative number to mark the presence of a number x at nums[x – 1]
Third pass, the first positive number is the missing index i, return i +1
If not found return n + 1.
Time complexity: O(n)
Space complexity: O(1)
class Solution {
public:
  int firstMissingPositive(vector<int>& nums) {
    const int n = nums.size();
    for (int& x : nums)
      if (x <= 0) x = INT_MAX;
    
    for (int x : nums) {
      x = abs(x);
      if (x >= 1 && x <= n && nums[x - 1] > 0)
        nums[x - 1] *= -1;
    }
    
    for (int i = 0; i < n; ++i)
      if (nums[i] > 0)
        return i + 1;
    
    return n + 1;
  }
};