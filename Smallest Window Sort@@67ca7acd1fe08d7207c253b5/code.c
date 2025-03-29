int findUnsortedSubarray(int arr[],int n){
    int k=0,z=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            k=i;
            break;}}
   for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            z = i;
            break;
        }
    }
    return z-k+1;

    }
