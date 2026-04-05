#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;
using namespace std::chrono;

int main() {
    int primeToCalc = 393939; // Change to your desired number :)

    cout << "Calculating primes up to " << primeToCalc << "..." << endl;

    auto startTime = high_resolution_clock::now();
    int primeFound = 0;

    for (int dividend = 2; dividend < primeToCalc; dividend++) {
        bool isPrime = true;

        for (int divisor = 2; divisor <= sqrt(dividend); divisor++) {

            if (dividend % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primeFound++;
        }
    }

    auto endTime = high_resolution_clock::now();
    duration<double> timeTaken = endTime - startTime;

    cout << "\nFound " << primeFound << " prime numbers." << endl;
    cout << "CPU Prime Score: " << timeTaken.count() << " seconds" << endl;

    return 0;
}  // Miku was here :)