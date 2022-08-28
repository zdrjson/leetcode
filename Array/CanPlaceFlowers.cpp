// Solution: Greedy
// Time complexity: O(n)
// Space complexity: O(1)
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for (size_t i = 0; i < flowerbed.size() && count < n; ++i) {
            if (flowerbed[i]) continue;
            bool left = i == 0 ? true : !flowerbed[i - 1];
            bool right = i == flowerbed.size() - 1 ? true : !flowerbed[i + 1];
            if (left && right) {
                flowerbed[i++] = 1;
                ++count;
            }
        }
        return count == n;
    }
};