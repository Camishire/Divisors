#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    long long b = 2;
    long long divisors [100000];
    cin >> n;

    if (n == 1) {
        cout << n;
    }
    else {
        divisors [0] = 1;
        divisors [1] = n;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                divisors [b] = i;
                if (i != n / i) {
                    divisors [b + 1] = n / i;
                    b += 2;
                }
                else b++;
            }
        }
        sort(divisors , divisors  + b);
        cout << divisors [0];
        for (int i = 1; i < b; i++) cout << " " << divisors [i];
    }
}