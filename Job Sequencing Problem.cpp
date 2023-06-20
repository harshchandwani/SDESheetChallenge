
class Solution 
{
    public:
    bool static sorter(Job a, Job b){
        return a.profit > b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    {
        //we have an array, which has n jobs
        //each element in array says
        //arr[i] == Job id, deadline, profit
        
        //what we have do is?
        ///maximize the profit and give the number of jobs we can do
        
        
        //we can just do one this, 
        //first we will try to sort according to the profit
        //then we will calculate the maximum time we have
        //1, 40 -> 1, 30 -> 4, 20 -> 1, 10
        
        //0 - > 1  === 40
        //1 -> 2   
        //2 -> 3  
        //3 -> 4   === 20
        
        int totalJobs = 0;
        int totalProfit = 0;
        sort(arr, arr + n, sorter);
        int maxLen = 0;
        for(int i = 0;i < n; i++){
            maxLen = max(maxLen, arr[i].dead);
        }
        vector<int>dp(maxLen + 1, 0);
        
        for(int i = 0; i < n; i++){
            int lastTime = min(maxLen - 1, arr[i].dead - 1);
            for(int j  = lastTime; j >= 0; j--){
                if(!dp[j]){
                    dp[j]++;
                    totalJobs++;
                    totalProfit += arr[i].profit;
                    break;
                }
            }
        }
        return {totalJobs, totalProfit};
    } 
};
