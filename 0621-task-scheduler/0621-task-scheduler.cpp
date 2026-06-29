class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mpp;
        for(auto itt:tasks){
            mpp[itt]++;
        }
        priority_queue<int>pq;
        for(auto itt:mpp){
            pq.push(itt.second);
        }
        int result=0;
        while(!pq.empty()){
            int time=0;
            vector<int> res;
            for(int i=0;i<n+1;i++){
                if(!pq.empty()){
                    res.push_back(pq.top()-1);
                    pq.pop();
                    time++;
                }
            }
            for(auto itt:res){
                if(itt){
                    pq.push(itt);
                }
            }
            result+=pq.empty()?time:n+1;
        }
        return result;

    }
};