#pragma once

struct Price {
    int hryvnias = 0;
    int kop = 0;
};

void print(Price Price);
Price roundToNearest10(Price Price);
void readPricesFromFile(const string &filename, Price &total);
