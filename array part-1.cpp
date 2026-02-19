1. 977 squar of sorted array in o(n)->
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int> res(nums.size());
      int lef=0; 
      int rig=nums.size()-1;
      int mov=res.size()-1;
       while(lef<=rig){
        if(abs(nums[lef])<abs(nums[rig])){
            res[mov]=nums[rig]*nums[rig];
            rig--;
        }else{
            res[mov]=nums[lef]*nums[lef];
            lef++;
        }
        mov--;
       }
       return res;
    }
};
2. 167 2 sum->
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int low=0, high=n-1;
    while(low<high){
        int sum=numbers[low]+numbers[high];
        if(sum==target){
            return {low+1, high+1};
        }else if(sum<target){
            low++;
        }else{
            high--;
        }
    }
    return {};
    }
};

3. Remove duplicates from sorted array-|| ->

Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(i == 1 || nums[index-2] != nums[i]) {
                nums[index++] = nums[i];
            }
        }for(int i=index; i<nums.size(); i++){
            nums[i]=nums[i-index];
        }
        return index;
    }
};
