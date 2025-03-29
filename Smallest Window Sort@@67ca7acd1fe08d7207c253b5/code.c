int findUnsortedSubarray(int arr[],int n){
    int k,z,r=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            k=i;
            break;}
   for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            z = i;
            break;
        }
    }
    for(int j=k;j<=z;j++){
        r+=1;
    }
    return r;
    
            
        }
        return 0;
    }
