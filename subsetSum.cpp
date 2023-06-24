

//in the given question, we given the size of the array and the array
// we have to return a vector

// ARRRAY ->    2 3
// RES ->       0 2 3 5


//sort the array
//sum = 0;
//index = 0
//n =size of vector
//if index == n 
//push it into the answer
//then there will be 2 cases for us

// TEST CASE 
// 5 2 1

//1st  -> sum increases
// we take the current element and add it to the sum
// SUM = 5 -> 5 + 2 -> 5 + 2 + 1
// AND NOW WE HAVE REACED THE END, RIGHT?
// SO WE WILL PRINT THE SUM OKAY?
// RETURN 


//2nd  -> sum didnt increase
//we will be printing the element as it is
// WHEN WE WOULD BE ADDING ALL THE SUM, THEN ITS THE TIME TO ADD THE REST ELEMENT, WHICH WILL BE DONE BY THIS FUNCTION

class Solution
{
public:
    void helper(vector<int>arr, int size, vector<int>&res, int sum, int index){
        if(index == size){
            res.push_back(sum);
            return;
        }
        
        
        //now the 2 ways, 
        //1st -> we will include the element in the sum
        //2nd ->  we will not include the element in the sum
        
        
        //1st
        helper(arr, size, res, sum + arr[index], index + 1);
        
        //2nd
        helper(arr, size, res, sum, index + 1);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>res;
        int sum = 0;
        helper(arr, N, res, sum, 0);
        return res;
        
    }
};
