#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string multiply_strings(string num_1, string num_2) 
{
    int len_1 = num_1.length(); 
    int len_2 = num_2.length();

    string final_result(len_1 + len_2, '0');
    
    reverse(num_1.begin(), num_1.end());
    reverse(num_2.begin(), num_2.end());

    for (int i = 0; i < len_1; i++)
    {
        for (int j = 0; j < len_2; j++) 
        {
            
            int tmp_result = (final_result[i + j] - '0') + (num_1[i] - '0') * (num_2[j] - '0');
                
            final_result[i + j] = '0' + tmp_result % 10;

            final_result[i + j + 1] += tmp_result / 10;
        }
    }
    
    for (int i = len_1 + len_2 - 1; i > 0 && final_result[i] == '0'; i--)
        final_result.pop_back();

    reverse(final_result.begin(), final_result.end());
    return final_result;
}


int main() 
{
    string num_1 ;
    string num_2 ;
    cin>>num_1>>num_2;

    string result = multiply_strings(num_1, num_2);
    cout  << result << endl;
    return 0;
}
