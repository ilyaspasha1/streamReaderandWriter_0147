#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    cout << "Awal program" << endl;
    try
    {
        array<int, 3> data = {10, 20, 30};
        cout << data.at(4) << endl;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
    cout << "Baris program yang terakhir" << endl;
    return 0;
}