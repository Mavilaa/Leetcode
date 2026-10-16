class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";

        string s = "";
        int qtd = sum / 9;
        int resto = sum % 9;

        for (int i = 0; i < qtd; i++)
            s.push_back('9');

        if (s.size() < num)
            s.push_back('0' + resto);

        while (s.size() < num)
            s.push_back('0');

        return s;
    }
};
