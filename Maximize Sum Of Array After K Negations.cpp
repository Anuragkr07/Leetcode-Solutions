class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>,greater<int>> pq;
        
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(k--){
            int a=pq.top();
            pq.pop();
            pq.push(-a);
        }
        
        int s=0;
        while (!pq.empty()) 
        {
           s+=pq.top();
            pq.pop();
        }
        return s;
    }
};
