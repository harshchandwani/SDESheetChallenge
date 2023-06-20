
class Solution
{
    public:
    static bool myCmp(Item A, Item B){
        return (double)A.value/(double)A.weight > (double)B.value/(double)B.weight;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, myCmp);
        double ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i].weight <= W){
                ans += arr[i].value;
                W -= arr[i].weight;
            }
            else{
                ans += (double)arr[i].value / (double) arr[i].weight * (double)W;
                break;
            }
        }
        return ans;
    }
        
};
