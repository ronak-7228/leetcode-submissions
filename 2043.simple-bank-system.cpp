class Bank {
public:
    vector<long long> bal;
    Bank(vector<long long>& balance) {
        bal = balance;
    }
    
    bool transfer(int a1, int a2, long long money) {
        if(a1 < 0 || a1 > bal.size() || a2 < 0 || a2 > bal.size()) return 0;
        if(money > bal[a1-1]) return 0;
        
        bal[a1-1] -= money;
        bal[a2-1] += money;
        
        return 1;
    }
    
    bool deposit(int a, long long money) {
        if(a < 0 || a > bal.size()) return 0;
        bal[a-1] += money;
        return 1;
    }
    
    bool withdraw(int a, long long money) {
        if(a < 0 || a > bal.size()) return 0;
        if(money > bal[a-1]) return 0;
        
        bal[a-1] -= money;
        return 1;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */