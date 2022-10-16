Problem -

There are N people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. 
Given the total number of persons N and a number k which indicates that k-1 persons are skipped and the kth person is killed in a circle. The task is to choose the person in the initial circle that survives.


// C++ code to implement the idea

#include <bits/stdc++.h>
using namespace std;

// Recursive function to implement the Josephus problem
int josephus(int n, int k)
{
	if (n == 1)
		return 1;
	else
		// The position returned by josephus(n - 1, k) is adjusted because the recursive call josephus(n - 1, k) considers the original position k % n + 1 as position 1
		return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
	int n, k;
	cin>>n>>k;
	cout << "The chosen place is " << josephus(n, k);
	return 0;
}
