class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans = 0, n = plants.size(); 
        int remaining_water = capacity;
        for(int i=0;i<n;) {
            if(plants[i]<=remaining_water) {
                remaining_water-=plants[i];
                ans++;
                i++;
            }
            else {
                remaining_water=capacity - plants[i];
                ans+=(i + i + 1);
                i++;
                
            }
        }
        return ans;
    }
};