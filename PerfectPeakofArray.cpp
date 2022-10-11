int Solution::perfectPeak(vector<int> &A) {
    int mxm = 1e5+1;
    int mx[mxm];
    int mn[mxm];
    mx[0]= A[0];
    mn[A.size()-1] = A[A.size()-1];
    int k=A.size()-1;
    int r = A.size()-1;
    for(int i=1;i<A.size();i++){
        mx[i] = max(mx[i-1],A[i]);
        mn[--k] = min(mn[r+1],A[r--]);
    }
    for(int i=1;i<A.size();i++){
        if(A[i]>mx[i-1] && A[i]<mn[i+1]){
            return 1;
        }
    }
    
    
    return 0;
    
    
    
    
}
