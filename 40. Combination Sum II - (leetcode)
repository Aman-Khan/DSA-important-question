//Que link - https://leetcode.com/problems/combination-sum-ii/description/

//Solution
void csum2(int ind, vector<int> s, vector<int> temp, vector<vector<int>> &ans, int target){

    if(target==0){
        ans.push_back(temp);
        return;
    }    

    for(int i=ind; i<s.size(); i++){
        if(i>ind && s[i]==s[i-1]) continue;
        if(s[i]>target) break;
        temp.push_back(s[i]);
        csum2(i+1, s, temp, ans, target-s[i]);
        temp.pop_back();
    }
}

/*
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[[1,1,6],
[1,2,5],
[1,7],
[2,6]]
Explaination : return non repeating sub sequence in sorted order
*/
