#include <bits/stdc++.h>
using namespace std;
#include "Price.h"

int32_t main() {
    Price total;
    readPricesFromFile("prices.txt", total);
    cout << "Total amount: ";
    print(total);
    total = roundToNearest10(total);
    cout << "Amount to be paid (after rounding): ";
    print(total);
    return 0;

}
