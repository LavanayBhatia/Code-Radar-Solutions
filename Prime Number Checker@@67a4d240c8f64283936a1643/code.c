int isPrime(int n){
    if(n==0 || n==1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
return 0;
        }
        else{
            return 1;
        }

    }
}