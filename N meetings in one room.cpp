class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool myCmp(pair <int, int> a, pair <int, int> b)   // made it static for valid use
{
    return (a.second < b.second);
}

    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>res(n);
        for(int i = 0; i < n; i++){
            res[i].first = start[i];
            res[i].second = end[i];
        }
        // Your code here
        sort(res.begin() , res.end(), myCmp);
        int prev = 0;
        int count = 1;
        for(int i = 1; i < n; i++){
            if(res[prev].second < res[i].first){
                count++;
                prev = i;
            }
        }
        return count;
    }
};
