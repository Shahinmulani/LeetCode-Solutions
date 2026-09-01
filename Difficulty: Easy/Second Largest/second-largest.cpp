class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int secondlargest = -1;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > largest){
                secondlargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secondlargest && arr[i] != largest){
                secondlargest = arr[i];
            }
        }
        return secondlargest;
    }
};