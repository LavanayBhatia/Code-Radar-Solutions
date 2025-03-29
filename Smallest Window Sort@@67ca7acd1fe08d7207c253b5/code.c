int findUnsortedSubarray(int arr[],int n){
    int k,z,r=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            k=i;
            break;}
        if(arr[n-i-1]>arr[n-i]){
            z=n-i-1;
            break;
        }
    for(int j=k;j<=z;j++){
        r+=1;
    }
    return r;
    
            
        }
        return 0;
    }
