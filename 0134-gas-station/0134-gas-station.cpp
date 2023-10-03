class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalDiff = 0, n = gas.size(), fuel = 0,ansIndex = 0 ;
        for (int i = 0; i < n; i++) {
            int diff = gas[i]-cost[i];
            totalDiff += diff;
            
            fuel += diff;
            if(fuel < 0 ) {
                fuel = 0;
                ansIndex = i+1; // mane ager zoto index chilo tara ans generate kora parbena
            }
            
        }
        
        return (totalDiff < 0 ? -1 : ansIndex);
        
    }
};