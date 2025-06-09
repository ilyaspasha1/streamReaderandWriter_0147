#include <iostream>
#include <fstream>  // Needed for ofstream
#include <string>
using namespace std;

int main()
{
    string baris;
    ofstream outfile;

    outfile.open("contohfile.txt");

    cout << ">= Menulis file, 'q' untuk keluar" << endl;

    while (true)
    {
        cout << "Masukan baris ";
        getline(cin, baris);

        if (baris == "q")
            break;

        outfile << baris << endl;  // Corrected output syntax
    }
