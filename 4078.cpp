class Solution {
public:
    bool threeFibonacciSum(int n) {
        int fibonacci[1000];
        bool a  = false;
        int index = 0;
        fibonacci[0] = 0;
        fibonacci[1] = 1;
        int atual = 0;
        double b = n;
        while(atual < n){
            fibonacci[index+2] = fibonacci[index] + fibonacci[index+1];
            atual = fibonacci[index];
                if(static_cast<double>(b/2) == static_cast<double>(atual)){
                a = true;
            }
        index++;
        }
        return (a);
    }
};
