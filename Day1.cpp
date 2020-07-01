// Q1 - Arranging coins

class Solution {
public:
    int arrangeCoins(int n) {
       int k=0;
        for(int i=1;i<=n;i++)
        {  k=i;
         
         if(n<k)
         {
             break;
         }
         else {
             n=n-i;
         }
        
            
        }
        return k;
    }
    
};