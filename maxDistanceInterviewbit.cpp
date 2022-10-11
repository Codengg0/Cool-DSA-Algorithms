int Solution::maximumGap(const vector<int> &A) {
  
    vector<pair<int,int> > v;
     //Brute force.. O(N^2).. so not optimal..
     
     //optimized one...
    for(int i=0;i<A.size();i++){
        //v[i].push_back(A[i],i+1);
        v.push_back({A[i],i+1});
    }
    sort(v.begin(),v.end()); //NlogN
    int mindx=INT_MAX;
    int ans =INT_MIN;
    for(int i=0;i<A.size();i++){   //N
        mindx = min(mindx,v[i].second);
        ans = max(ans,v[i].second-mindx);
        
    }
  
   return ans;
   
    
}
