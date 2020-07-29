class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq;
        freq.resize(26); 
        for(auto task:tasks) {
            freq[task-'A']++;
        }
        
        sort(freq.begin(),freq.end());
       
        
        int idle_time =(freq[25]-1)*n; 
        
        for(int i=24;i>0;i--) {
            idle_time -=min(freq[25]-1,freq[i]);
            
        }
        idle_time = max(0,idle_time);
        return idle_time+tasks.size();
    }
};