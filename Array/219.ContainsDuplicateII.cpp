// Solution: Sliding Window + Hashtable
// Hashtable to store the last index of a number.
// Remove the number if it’s k steps behind the current position.
// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> m; // num -> last index
    for (int i = 0; i < nums.size(); ++i) {
      if (i > k && m[nums[i - k - 1]] < i - k + 1)
        m.erase(nums[i - k - 1]);
      if (m.count(nums[i])) return true;
      m[nums[i]] = i;
    }
    return false;
  }
};