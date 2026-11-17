class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int x : stones){
            pq.push(x);
        }
        while(pq.size() > 1){
            int max = pq.top();
            pq.pop();
            int secMax = pq.top();
            pq.pop();

            int val = max - secMax;
            if(max > secMax){
                pq.push(val);
            }
        }
        if(pq.empty()){
            return 0;
        }
        return pq.top();
    }
};