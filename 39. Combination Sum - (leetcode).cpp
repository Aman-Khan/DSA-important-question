//Que link - https://leetcode.com/problems/surrounded-regions/

//Solution

void equalCombi(int i, vector<int> s, vector<vector<int>> &ans, vector<int> temp, int target){
    if(i==s.size()){
        if(target==0){
            ans.push_back(temp);
        }
        return;
    }

    if(s[i]<=target){
        temp.push_back(s[i]);
        equalCombi(i, s, ans, temp, target-s[i]);
        temp.pop_back();
    }
    equalCombi(i+1, s, ans, temp, target);
}

/* 
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
*/
