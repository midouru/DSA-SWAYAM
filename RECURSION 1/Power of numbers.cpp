int reverse(int n){
        int rev = 0;
        while(n>0){
            int digit = n%10;
            rev = rev*10 + digit;
            n = n/10;
        }
        return rev;
    }
    int reverseExponentiation(int n) {
        int new_num = reverse(n);
        int ans = pow(n,new_num);
        return ans;
        
    }
