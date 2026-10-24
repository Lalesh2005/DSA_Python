class Solution {
public:
    void total_helper(vector<int>& digits, set<int>& sol,
                      string& s, vector<bool>& used) {

        if (s.size() == 3) {
            int num = stoi(s);

            if (num % 2 == 0 && s[0] != '0') {
                sol.insert(num);
            }
            return;
        }

        for (int i = 0; i < digits.size(); i++) {
            if (used[i]) continue;

            // Choose
            used[i] = true;
            s.push_back('0' + digits[i]);

            total_helper(digits, sol, s, used);

            // Backtrack
            s.pop_back();
            used[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits) {
        set<int> sol;
        string s = "";
        vector<bool> used(digits.size(), false);

        total_helper(digits, sol, s, used);

        return sol.size();
    }
};