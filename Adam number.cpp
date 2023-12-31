#include <bits/stdc++.h> 
using namespace std; 

int reverseDigits(int num) 
{ 
	int rev = 0; 
	while (num > 0) 
	{ 
		rev = rev * 10 + num % 10; 
		num /= 10; 
	} 
	return rev; 
} 
int square(int num) 
{ 
	return (num * num); 
} 
bool checkAdamNumber(int num) 
{  
	int a = square(num); 
	int b = square(reverseDigits(num)); 
	if (a == reverseDigits(b)) return true; 
	return false;		 
} 
int main() 
{ 
	int num;
    cin>>num; 
	
	if (checkAdamNumber(num)) cout << "True"; 
	else cout << "False";	 
	return 0; 
} 
