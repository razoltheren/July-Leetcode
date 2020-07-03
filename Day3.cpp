class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        if(N>14 && N%14!=0)
        {
            N= N%14;
        }
        
        else if( N%14==0)
        { N=14;
            
        }
        int x = cells.size();
        vector<int> cellsB(8,0); 
        while(N>0)
        {
            for(int i=1;i<x-1;i++)
            {
                if(cells[i-1] == cells[i+1])
                {
                    cellsB[i] =1;
                }
                else{
                    cellsB[i]=0;
                }
                
            }
            cells = cellsB;
            N--;
        }
        
        return cells;
    }
        