#include <bits/stdc++.h>
using namespace std;
#include "Price.h"

Price roundToNearest10(Price Price) {
    Price.kop = round(Price.kop / 10.0) * 10;
    return Price;
}

void print(Price Price) {
    cout << Price.hryvnias+Price.kop/100 << " UAH " << Price.kop%100 << " kop" << endl;
}

void readPricesFromFile(const string& filename, Price& total) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    int h, k, q;
    while (file >> h >> k >> q) {
        total.kop += k*q;
        total.hryvnias += h*q;
    }
}
