#include<iostream>
#include<algorithm> // For sorting the stalls array
using namespace std;

int main() {
    int n, k; // n = number of stalls, k = number of cows
    cout << "Enter the number of stalls: ";
    cin >> n;
    cout << "Enter the number of cows: ";
    cin >> k;

    int stalls[n];
    cout << "Enter the positions of the stalls: ";
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    // Sort the stalls to apply binary search
    sort(stalls, stalls + n);

    // Variables for binary search
    int start = 0; // Minimum possible distance is 0
    int end = stalls[n-1] - stalls[0]; // Maximum possible distance is between first and last stall
    int ans = 0; // To store the result

    // Binary search for the largest minimum distance
    while (start <= end) {
        int mid = start + (end - start) / 2; // Mid is the candidate distance
        int count = 1; // We always place the first cow in the first stall
        int pos = stalls[0]; // Position of the last cow placed

        // Try to place the rest of the cows
        for (int i = 1; i < n; i++) {
            if (stalls[i] - pos >= mid) {
                count++; // Place a cow in this stall
                pos = stalls[i]; // Update the position of the last cow placed
            }
        }

        // Check if we could place at least k cows
        if (count >= k) {
            ans = mid; // This mid value is a valid answer
            start = mid + 1; // Try for a larger minimum distance
        } else {
            end = mid - 1; // Try for a smaller minimum distance
        }
    }

    // Output the largest minimum distance found
    cout << "The largest minimum distance is: " << ans << endl;

    return 0;
}