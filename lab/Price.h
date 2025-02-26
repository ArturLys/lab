#pragma once
#define int long long
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<vector<int>> vvi;
typedef vector<vector<double>> vvd;
typedef vector<vector<pii>> vvii;
typedef vector<vector<pdd>> vvdd;
typedef vector<pii> vii;
typedef vector<pdd> vdd;
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) (x*(y/gcd(x,y))
#define mp make_pair 
#define pb push_back
#define ff first 
#define ss second 
#define INF 2e18 
#define all(x) (x).begin(), (x).end() 
#include "Price.h"

struct Price {
    int hryvnias;
    short kop;

    Price(int h = 0, short k = 0);
    Price operator+(const Price &other) const;
    Price operator*(int quantity) const;
    void roundToNearest10();
    void print() const;
};

void readPricesFromFile(const string &filename, Price &total);
