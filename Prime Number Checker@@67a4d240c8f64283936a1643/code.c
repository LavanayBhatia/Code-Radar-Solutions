int isPrime(int n){
    for(int i=2;i<n/2;i++){
        if(n==0 || n==1){
            return 0;
        }
        else if(n%i==0){
            return 0;
        }return 1;
    }
}