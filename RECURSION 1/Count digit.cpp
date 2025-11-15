int countDigits(int n, int original){
        if (n == 0) return 0;
        
        int digit = n % 10;
        int count = 0;
            
        if (digit != 0 && original% digit == 0){
            count = 1;
            
        }
        
        // recursive call on remaining digits
        return count + countDigits(n / 10, original);
    }
    int evenlyDivides(int n) {
       return countDigits(n,n) ;
    }
