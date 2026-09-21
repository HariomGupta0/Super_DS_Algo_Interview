https://leetcode.com/problems/restore-finishing-order/description/?envType=problem-list-v2&envId=hash-table


//Just remember the set functions , here I learned about set.contains  

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = friends.size();
        vector<int> result;

        unordered_set<int> set;
        
        for(int num: friends) {
            set.insert(num);
        }

        for(int i=0;i<order.size();i++) {
            if(set.contains(order[i])) {
                result.push_back(order[i]);
            } 
        }

        return result;
    }
};
