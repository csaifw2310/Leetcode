class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> p;
        for(int i=0;i<gifts.size();i++) p.push(gifts[i]);
        while(k--){
            long long  x = p.top();
            p.pop();
            p.push(sqrt(x));
        }
        long long NoGifts=0;
        while(!p.empty()){
            NoGifts+=p.top();
            p.pop();
        }
        return NoGifts;
        
    }
};