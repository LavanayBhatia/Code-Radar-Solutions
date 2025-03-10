int isPrime(int n){
    for(int i=2;i*i<n;i++){
        if(n==0 || n==1){
            return 0;
        }
        else if(n%i==0){
            return 0;
        }return 1;
    }
}