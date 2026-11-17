class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int x : stones){
            pq.push(x);
        }
        while(pq.size() > 1){
            int heaviest = pq.top();
            pq.pop();
            int secondHeaviest = pq.top();
            pq.pop();

            int val = heaviest - secondHeaviest;
            if(heaviest > secondHeaviest){
                pq.push(val);
            }
        }
        if(pq.empty()){
            return 0;
        }
        return pq.top();
    }
};