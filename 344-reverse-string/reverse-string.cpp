class Solution {
public:
    void value (vector<char>&s,int i,int j){
        if(i>=j)return;
        swap(s[i],s[j]);
        value(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) {
      value(s,0,s.size()-1);  
    }
};