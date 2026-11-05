solve(temp,arr,target,sum,0);
        
        return res;
    }
    
    void solve(vector<int>& temp, vector<int> &arr, int target, int sum, int index){
        if(index==arr.size())
            return;
        if(sum==target){
            res.push_back(temp);
            return;
        }
        if(sum>target){
            return;
        }
        
        sum+=arr[index];
        temp.push_back(arr[index]);
        
        solve(temp,arr,target,sum,index);
        //solve(temp,arr,target,sum,index+1);
        
        sum-=arr[index];
        temp.pop_back();
        
        solve(temp,arr,target,sum,index+1);
        
    }
};