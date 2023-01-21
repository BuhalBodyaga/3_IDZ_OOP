
#include <iostream>
#include <string>
#include "source.h"

using namespace std;


int main()
{
    string in;
    cout<<"Ведите строку "<< "\n";
    cin >> in;
    string encodedData = base64_encode(in);
    cout << "Закодированная строка " << "\n";
    cout << encodedData<<"\n";
    string decodedData = base64_decode(encodedData);
    cout << "Раскодированная строка " << "\n";
    cout << decodedData;
}