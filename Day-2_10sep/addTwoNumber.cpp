

class Solution
{
public:
        string calc_Sum(vector<int> &arr1, vector<int> &arr2)
        {
                // Complete the function
                int n1 = arr1.size() - 1, n2 = arr2.size() - 1;
                string ans = "";
                int carry = 0;
                while (n1 >= 0 || n2 >= 0 || carry)
                {
                        int sum = carry;
                        if (n1 >= 0)
                                sum += arr1[n1--];
                        if (n2 >= 0)
                                sum += arr2[n2--];
                        carry = sum / 10;
                        ans.push_back(sum % 10 + '0');
                }
                reverse(ans.begin(), ans.end());
                return ans;
        }
};