class Solution {
public:
void generateValidParenthesis(int n, vector<string> &result, string curr, int open)
{
    if (curr.length() == 2 * n)
    {
        result.push_back(curr);
        return;
    }
    if (open < n)
        generateValidParenthesis(n, result, curr + "(", open + 1);
    if (curr.length() - open < open)
        generateValidParenthesis(n, result, curr + ")", open);
}
vector<string> generateParenthesis(int n)
{
    vector<string> result;
    generateValidParenthesis(n, result, "", 0);
    return result;
}
};