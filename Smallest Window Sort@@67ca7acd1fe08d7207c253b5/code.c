int findUnsortedSubarray(int arr[],int n){
    int k=-1,z=-1;
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
    int w=arr[k],e=arr[k];
   for(int i=k+1;i<=z;i++){
    if(arr[i]<w)w=arr[i];
    if(arr[i]>e)e=arr[i];
   }
   while (k > 0 && arr[k - 1] > w) {
    k--;
}
while (z < n - 1 && arr[z + 1] < e) {
    z++;
}

    return z-k+1;
     
    
    }
