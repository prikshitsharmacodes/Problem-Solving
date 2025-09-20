class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n =arr.size();
        int largest = arr[0];
        int secLargest=-1;
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                secLargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>secLargest){
                secLargest=arr[i];
            }
        }
        return secLargest;
    }
};
