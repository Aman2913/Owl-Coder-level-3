#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int n)
{
	if (n <= 1) {
		return true;
	}
	long long left = 1, right = n;

	while (left <= right) {
		long long mid = left + (right - left) / 2;
		long long square = mid * mid;

		if (square == n) {
			return true;
		}
		else if (square < n) {

			left = mid + 1;
		}
		else {

			right = mid - 1;
		}
	}
	return false;
}

int main()
{
	int n;
    cin>>n;

	if (isPerfectSquare(n)) {
		cout << "True"<< endl;
	}
	else {
		cout <<"False"<<endl;
	}
	return 0;
}
