#include <bits/stdc++.h>
using namespace std;
#include "Price.h"

int32_t main() {
    Price total;
    readPricesFromFile("prices.txt", total);
    cout << "Total amount: ";
    total.print();
    total.roundToNearest10();
    cout << "Amount to be paid (after rounding): ";
    total.print();
    return 0;

}
