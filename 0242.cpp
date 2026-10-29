class Solution {
  public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        int cont[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            cont[s[i] - 'a']++;
            cont[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (cont[i] != 0)
                return false;
        }
        return true;
    }
};