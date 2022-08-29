// Solution: BST
// Use a BST (ordered set) to track the current seatings.
// Time Complexity:
// init: O(1)
// seat: O(P)
// leave: O(logP)
// Space complexity: O(P)
class ExamRoom {
public:
  ExamRoom(int N): N_(N) {}
  
  int seat() {
    int p = 0;
    int max_dist = s_.empty() ? 0 : *s_.begin();
    auto left = s_.begin();    
    auto right = left;
    while (left != s_.end()) {
      ++right;
      int l = *left;
      int r = right != s_.end() ? *right : (2 * (N_ - 1) - *left);      
      int d = (r - l) / 2;      
      if (d > max_dist) {
        max_dist = d;
        p = l + d;
      }
      left = right;
    }    
    s_.insert(p);
    return p;
  }
  
  void leave(int p) {
    s_.erase(p);
  }
  
private:
  const int N_;
  set<int> s_;
};
