// Solution 1: Sorting + Binary Search
// Time complexity: O(n^3 log n + klogk)
// Space complexity: O(k)
class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &num, int target) {
    set<vector<int>> h; 
 
    sort(num.begin(), num.end());
 
    int n = num.size();
 
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for(int k = j + 1; k < n; k++) {
          int t = target - num[i] - num[j] - num[k];
          if (t < num[k]) break;
          if (!std::binary_search(num.begin() + k + 1, num.end(), t)) continue;          
          h.insert({num[i], num[j], num[k], t});          
        }
      }
    }
    return vector<vector<int>>(begin(h), end(h));
  }
};

// C++ opt
class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &num, int target) {        
    sort(num.begin(), num.end());
    if (target > 0 && target > 4 * num.back()) return {};
    if (target < 0 && target < 4 * num.front()) return {};
    
    set<vector<int>> h;    
    int n = num.size();
 
    for (int i = 0; i < n; i++) {   
      for (int j = i + 1; j < n; j++) {                
        for(int k = j + 1; k < n; k++) {
          int t = target - num[i] - num[j] - num[k];
          if (t < num[k]) break;
          if (!std::binary_search(num.begin() + k + 1, num.end(), t)) continue;          
          h.insert({num[i], num[j], num[k], t});          
        }           
      }
    }
 
    return vector<vector<int>>(begin(h), end(h));
  }
};

// Solution 2: Sorting + HashTable
// Time complexity: O(n^3 + klogk)
// Space complexity: O(n + k)
class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &num, int target) {        
    sort(num.begin(), num.end());
    if (target > 0 && target > 4 * num.back()) return {};
    if (target < 0 && target < 4 * num.front()) return {};
    
    unordered_map<int, int> index;
    for (int i = 0; i < num.size(); ++i)
      index[num[i]] = i;
    
    set<vector<int>> h;    
    int n = num.size();
 
    for (int i = 0; i < n; i++) {   
      for (int j = i + 1; j < n; j++) {                
        for(int k = j + 1; k < n; k++) {
          int t = target - num[i] - num[j] - num[k];
          if (t < num[k]) break;
          auto it = index.find(t);
          if (it == index.end() || it->second <= k) continue;
          h.insert({num[i], num[j], num[k], t});
        }           
      }
    }
 
    return vector<vector<int>>(begin(h), end(h));
  }
};