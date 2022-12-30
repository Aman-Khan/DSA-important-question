void permutation(vector<int> s, vector<int> temp, vector<vector<int>> &ans, vector<int> fqlst){
    if(temp.size()==s.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=0; i<s.size(); i++){
        if(!fqlst[i]){
            fqlst[i]=1;
            temp.push_back(s[i]);
            permutation(s, temp, ans, fqlst);
            temp.pop_back();
            fqlst[i]=0;
        }
    }
}

int main(){
    vector<int> s = {1,2,3};
    vector<int> temp;
    vector<vector<int>> ans;
    vector<int> fqlst(s.size(), 0);
    permutation(s, temp, ans, fqlst);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
