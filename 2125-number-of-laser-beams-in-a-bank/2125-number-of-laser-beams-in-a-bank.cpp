class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int previousDeviceCount = 0;
        int totalBeam = 0;
        for(int i=0;i<n;i++)
        {
            int count = 0;
            for(int j = 0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1') count ++;
            }
            
            totalBeam+=(count*previousDeviceCount);
            if(count == 0) continue;
            previousDeviceCount = count;
        }
        return totalBeam;
    }
    
};