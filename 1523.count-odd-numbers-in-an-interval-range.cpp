class Solution {
public:
    int countOdds(int low, int high) {
      int ans = ((high-low)>>1) + ((low&1)|(high&1));
      return ans;  
    }
};