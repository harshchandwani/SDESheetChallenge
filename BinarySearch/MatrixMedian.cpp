int Solution::findMedian(vector<vector<int> > &A) {

    int mn=INT_MAX,mx=INT_MIN;

    for(int i=0;i<A.size();i++){

        mn=min(mn,A[i][0]);

        mx=max(mx,A[i][A[0].size()-1]);

    }

    int find=(A.size()*A[0].size()+1)/2;

    while(mn<mx){

        int mid=mn+(mx-mn)/2;

        int c=0;

        for(int i=0;i<A.size();i++)

            c=c+upper_bound(A[i].begin(),A[i].begin()+A[0].size(),mid)-A[i].begin();

        if(c<find)

            mn=mid+1;

        else

            mx=mid;

    }

    return mn;

}
