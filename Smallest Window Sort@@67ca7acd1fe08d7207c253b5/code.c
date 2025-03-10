int findUnsortedSubarray(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;i<j-i-1;j++){
            if(arr[j]>arr[j+1]){
 printf("%d",arr[j]);
            }
            else{
               
                temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
            }
        }
    }
}