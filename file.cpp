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

    outfile.close(); 
    
    ifstream infile;

    infile.open("contohfile.text");

    cout<<endl <<">=  Membuka dan membaca file "<<endl;

    if (infile.is_open())
    {
        while (getline(infile, baris))
        {
            cout<< baris <<endl;
        }
        infile.close();
        
    }
    else
        cout<<"Unable to open file";
}