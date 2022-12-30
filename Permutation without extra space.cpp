void recPermute(int index, vector<int> nums, vector<vector<int>> &ans){
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i=index; i<nums.size(); i++){
        swap(nums[index], nums[i]);
        recPermute(index+1, nums, ans);
        swap(nums[index], nums[i]);
    }
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    int index=0;
    recPermute(index, nums, ans);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
