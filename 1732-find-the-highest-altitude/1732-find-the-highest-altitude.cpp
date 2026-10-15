/*class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int num=gain.size();
    vector<int>temp;
    int sum=0;
    for(int i=0;i<num;i++){
        sum+=gain[i];
    }
    for(int i=num-1;i>=0;i--){
        sum-=gain[i];
        temp.push_back(sum);
    }
    int height=*max_element(temp.begin(),temp.end());
    return height;
    }
};*/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // Start at an altitude of 0
        int max_altitude = 0;
        int current_altitude = 0;
        
        // Traverse through the net gain of each point
        for (int i = 0; i < gain.size(); i++) {
            current_altitude += gain[i];
            
            // Track the maximum altitude reached so far
            if (current_altitude > max_altitude) {
                max_altitude = current_altitude;
            }
        }
        
        return max_altitude;
    }
};