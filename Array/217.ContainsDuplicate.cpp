// Solution 1: HashTable
// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int num : nums)
            if (!s.insert(num).second) return true;
        return false;
    }
};

//Solution 2: Sorting
//Time complexity: O(nlogn)
//Space complexity: O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(begin(nums), end(nums));
        for (int i = 1; i < nums.size(); ++i)
            if (nums[i] == nums[i - 1]) return true;
        return false;
    }
};