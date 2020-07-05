class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y; 
    int k= 0; 
  
    while (z > 0) { 
        k += z & 1; 
        z >>= 1; 
    } 
  return k;
    }
};