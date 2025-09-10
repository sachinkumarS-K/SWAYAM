#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        printf("Enter any number\t");
        scanf("%d", &n);
        vector<int> ans;
        int carry = 0;
        ans.push_back(1);
         for(int i = 2 ; i<=n ; i++){
            int carry = 0 ;
            for(int j = 0 ; j<ans.size() ; j++){
                long long sum = ans[j] * i  + carry;
                ans[j] = sum % 10;
                carry = sum / 10;
            }
            if(carry){
                while(carry){
                    ans.push_back(carry%10);
                    carry/=10;
                }
            }
            carry = 0;
        }
        printf("Factorial of %d is : ", n);
        for (int i = ans.size() - 1; i >= 0; i--)
                printf("%d", ans[i]);


        return 0;
}