#include <bits/stdc++.h>
using namespace std;
#include "Price.h"

Price normalize(Price p) {
    p.hryvnias += p.kop / 100;
    p.kop %= 100;
    return p;
}

Price add(Price a, Price b) {
    return normalize({ a.hryvnias + b.hryvnias, a.kop + b.kop });
}

Price multiply(Price p, int factor) {
    return normalize({ p.hryvnias * factor, p.kop * factor });
}

Price roundToNearest10(Price p) {
    p.kop = round(p.kop / 10.0) * 10;
    return normalize(p);
}

void print(Price p) {
    cout << p.hryvnias << " UAH " << p.kop << " kop" << endl;
}

void readPricesFromFile(const string& filename, Price& total) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    int h, k, q;
    while (file >> h >> k >> q) {
        total = add(total, multiply({ h, k }, q));
    }
}
