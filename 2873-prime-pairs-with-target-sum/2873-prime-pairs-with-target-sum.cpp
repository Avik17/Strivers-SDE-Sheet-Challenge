class Solution {

public:
    vector<vector<int>> findPrimePairs(int n) {
    vector<vector<int>> ans;
    
    for (int num1 = 2; num1 <= n / 2; num1++) {
        int num2 = n - num1;
        
        if (isPrime(num1) && isPrime(num2)) {
            vector<int> res = {num1, num2};
            ans.push_back(res);
        }
    }
    
    return ans;


}
bool isPrime(int num) {
    if (num <= 1)
        return false;
        
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    
    return true;
}
};