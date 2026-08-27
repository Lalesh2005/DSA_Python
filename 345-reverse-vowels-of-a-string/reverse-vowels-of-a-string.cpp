class Solution {
public:
string reverseVowels(string s)
{
    int n=s.size();
    int left=0;
    int right =n-1;
    while(left<=right)
    {
        if ((s[left] == 'A' || s[left] == 'E' || s[left] == 'I' || s[left] == 'O' || s[left] == 'U' || s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u') && (s[right] == 'A' || s[right] == 'E' || s[right] == 'I' || s[right] == 'O' || s[right] == 'U' || s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'))
        {
            char c=s[left];
            s[left]=s[right];
            s[right]=c;
            left++;
            right--;
        }
        else if(s[left] != 'A' && s[left] != 'E' && s[left] != 'I' && s[left] != 'O' && s[left] != 'U' && s[left] != 'a' && s[left] != 'e' && s[left] != 'i' && s[left] != 'o' && s[left] != 'u')
        {
            left++;
        }
        else if (s[right] != 'A' && s[right] != 'E' && s[right] != 'I' && s[right] != 'O' && s[right] != 'U' && s[right] != 'a' && s[right] != 'e' && s[right] != 'i' && s[right] != 'o' && s[right] != 'u')
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
     }
     return s;
}
};