#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "selamat belajar di prodi Ti umy" <<endl;
        throw ("halo");
        cout <<"peryataan tidak akan dieksekusi" <<endl;

    }
    catch(int a)
    {
        cout << "pengecualian akan diekesekusi"<<endl;
    }
    catch (...)
    {
        cout << "default pengecualian diekesekusi" <<endl;

}
 return 0;
 