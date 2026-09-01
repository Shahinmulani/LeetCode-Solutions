class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min = arr[0];
        int max = arr[0];
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > max){
                max = arr[i];
            }
            if (arr[i] < min){
                min = arr[i];
            }
        }
        return {min, max};
    }
};