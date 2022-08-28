// Solution: Simulation
// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> s;
        for (int i = 0 ; i < asteroids.size(); ++i) {
            const int size = asteroids[i];
            if (size > 0) { // To right, OK
                s.push_back(size);
            } else {
                // To left
                if (s.empty() || s.back() < 0) // OK when all are negtives
                    s.push_back(size);
                else if (abs(s.back()) <= abs(size)) {
                    // Top of the stack is going right.
                    // Its size is less than the current one.
                    
                    // The current one still alive!
                    if (abs(s.back()) < abs(size)) --i;
                    
                    s.pop_back(); // Destory the top one moving right
                }                    
            }
        }
        
        // s must look like [-s1, -s2, ... , si, sj, ...]
        return s;
    }
};