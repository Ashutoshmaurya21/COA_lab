// CPP program to find sum of numbers
// upto n whose 2 bits are set
#include <bits/stdc++.h>

using namespace std;
 
// To count number of set bits

int countSetBits(int n)
{

    int count = 0;

    while (n) {

        n &= (n - 1);

        count++;

    }

    return count;
}
 
// To calculate sum of numbers

int findSum(int n)
{

    int sum = 0;
 

    // To count sum of number

    // whose 2 bit are set

    for (int i = 1; i <= n; i++)

        if (countSetBits(i) == 2)

            sum += i;
 

    return sum;
}
 
// Driver program to test above function

int main()
{

    int n = 10;

    cout << findSum(n);

    return 0;
}
