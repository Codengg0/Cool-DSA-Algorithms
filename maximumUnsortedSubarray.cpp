vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> v=A;
    sort(v.begin(),v.end());
     int l=-1,r=-1;
    for(int i=0;i<A.size();i++){
        if(A[i]!=v[i]){
            l=i;
            break;
        }
    }
    vector<int> a;
    a.push_back(l);
    if(l==-1){
        return a;
        }
    for(int i=A.size()-1;i>l;i--){
        if(A[i]!=v[i]){
            r=i;
            break;
        }
    }
    a.push_back(r);
    return a;

}

