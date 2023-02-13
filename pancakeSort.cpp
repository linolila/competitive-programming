class Solution {
    public:
    //  the function find is use to find the max index till the end pointer.
int find(vector<int>& arr, int len)
{
    int maxi = 0;
    int ans = 0;
    for(int i=0;i<len;i++)
    {
        if(maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
    }
    return ans;
}

// this function is use to reverse the array from start to max_index position.
// in next step to reverse the whole array till end pointer.
void flip(vector<int>& arr, int x)
{
   reverse(arr.begin(),arr.begin()+x);
}


vector<int> pancakeSort(vector<int>& arr) {
    
    int n = arr.size();
    int i;
	// the end pointer.
    int end = n;
    vector<int>ans;
	//we will iterate till the end pointer comes at start position.
    while(end != 1)
    {
	   // will find the max index.
        int idx = find(arr,end);
		// then reverse from start to amx index.
        flip(arr,idx + 1);
		// then start to  the end pointer.
        flip(arr,end);
		// push the number of flips used in step 1 and step 2.
        ans.push_back(idx + 1);
        ans.push_back(end);
		// decrease the end pointer everytime and you will have the last element greatest of all in every iteration.
		//finally when end pointer will be at 1then you array will be sorted.
        end--;
    }
   return ans; 
}
};
