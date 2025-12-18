class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum3;
        int sum2=0;
        for (int i = 0; s[i] != '\0'; i++){
            sum1=sum1+s[i];
        }
        for (int i = 0; t[i] != '\0'; i++){
            sum2=sum2+t[i];
        }
        sum3=sum2-sum1;
        return sum3;

    }

};
