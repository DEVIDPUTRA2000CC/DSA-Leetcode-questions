//sliding window problems
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        int maxsum=sum;
        //creating a sliding window
        for(int i=k; i<nums.size(); i++){
            sum-=nums[i-k]; // removing the previous element
            sum+=nums[i]; // adding new elements 
            maxsum=max(maxsum, sum);

        }
      
      return (double)maxsum / k;

    }
};
