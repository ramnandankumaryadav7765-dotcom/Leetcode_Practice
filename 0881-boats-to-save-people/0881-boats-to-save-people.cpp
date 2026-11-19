class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin() , people.end());

        int left = 0;
        int right = people.size()-1;

        int boatsCount = 0;

        while(left <= right){
            if(people[right] + people[left] <= limit){
                left++;
            }

            boatsCount++;

            right--;
        }

        return boatsCount;
    }
};