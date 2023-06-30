bool rev(int a, int b)
{
    return b<a;
}

vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
   
   sort(A.begin(),A.end(),rev);
    sort(B.begin(),B.end(),rev);
    priority_queue<int,vector<int>,greater<int>> pq;
    int n = A.size();
    int k = 0;
    while(k<n)
    {
        pq.push(A[k]+B[k]);
        if(pq.size()>C){
            pq.pop();
            break;
        }
        k++;
    }
    for(int i = 0; i<n ;++i)
    {
        for(int j = 0; j<n;++j)
        {
            if(i!=j)
            {
                if((A[i]+B[j]) > pq.top())
                {
                    pq.pop();
                    pq.push(A[i]+B[j]);
                }
                else
                {
                    break;
                }
            }
        }
    }
    vector<int> ans;
  while(pq.size()>0){
      ans.push_back(pq.top());
      pq.pop();
  }
    sort(ans.begin(), ans.end(),rev);
    return ans;

}
